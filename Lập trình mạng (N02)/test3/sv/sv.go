package main

import (
	"bufio"
	"encoding/json"
	"fmt"
	"net"
	"strings"
	"sync"
	// "gitlab.com/fit-vimaru/ltm-2021-2/vi-du/cmd/thong-diep-v2/types"
)

type Packet struct {
	Type string // Loại bản tin (PING, LOGIN, USERS, SEND)
	From string // Người gửi
	To   string // Người nhận
	Data string // Nội dung thông điệp hoặc tên đăng nhập
}

// Biến này sử dụng bởi nhiều goroutine cần được bảo về bằng mutex.
var connMap map[string]net.Conn
var connMapMutex sync.Mutex

// Đọc thông tin gói tin qua kênh dữ liệu
func readPacketSignal(reader *bufio.Reader, data chan *Packet) {
	pkt, err := readPacket(reader)
	if err != nil {
		// Có lỗi xảy ra
		fmt.Println(err)
	} else {
		data <- pkt
	}
}

func readPacket(reader *bufio.Reader) (*Packet, error) {
	// Đọc một dòng từ kết nối (đọc dữ liệu gửi từ client)
	data, err := reader.ReadString('\n')
	if err != nil {
		fmt.Println(err.Error())
		return nil, err
	}

	message := strings.TrimSpace(data)
	fmt.Println("Command: " + message)

	pkt := &Packet{}
	if err := json.Unmarshal([]byte(message), pkt); err != nil {
		return nil, err
	}

	return pkt, nil
}

func packet_process(login *string, c net.Conn, pkt *Packet) {
	switch pkt.Type {
	case "LOGIN":
		username := pkt.Data
		connMapMutex.Lock()
		if _, ok := connMap[username]; ok {
			// Người dùng đã tồn tại
			fmt.Fprintf(c, "Người dùng %s đã sử dụng bởi kết nối khác\n", username)
		} else {
			// Đăng nhập thành công
			connMap[username] = c
			*login = username
			fmt.Fprintf(c, "Đăng nhập thành công dưới tên người dùng %s\n", username)
		}
		connMapMutex.Unlock()

	case "USERS":
		fmt.Fprintln(c, "Danh sách người dùng trong hệ thống:")

		connMapMutex.Lock()
		for a := range connMap {
			fmt.Fprintf(c, "%s\n", a)
		}
		connMapMutex.Unlock()

	case "SEND":
		to := pkt.To

		connMapMutex.Lock()
		if to != "" {
			if dstConn, ok := connMap[to]; ok {
				connMapMutex.Unlock()
				// Nếu người dùng tồn tại
				// Đọc thông điệp
				message := pkt.Data
				// Gửi thông điệp tới đích
				fmt.Fprintf(dstConn, "%s: %s\n", *login, message)
			} else {
				connMapMutex.Unlock()
				// Nếu người dùng không tồn tại
				fmt.Fprintf(c, "Người dùng %s không kết nối tới hệ thống\n", to)
			}
		} else {
			// Gửi tới tất cả mọi người
			for _, dstConn := range connMap {
				message := pkt.Data
				// Gửi thông điệp tới đích
				fmt.Fprintf(dstConn, "%s: %s\n", *login, message)
			}
			connMapMutex.Unlock()
		}
	default:
		fmt.Fprintln(c, "Lệnh này không được hỗ trợ")
	}
}

func conn_handler(c net.Conn) {
	defer c.Close()

	fmt.Printf("Có kết nối mới %s\n", c.RemoteAddr().String())

	// Gửi chuỗi ký tự qua kết nối.
	fmt.Fprintln(c, "Xin chào!")

	creader := bufio.NewReader(c)

	login := "" // Tên người dùng hiện tại

	pktChan := make(chan *Packet)

MAIN_LOOP:
	for {
		go readPacketSignal(creader, pktChan)

		timeout := make(chan int)

		select {
		case pkt := <-pktChan:
			// Xử lý gói tin
			packet_process(&login, c, pkt)
		case <-timeout:
			// Hết thời gian timeout
			// Đóng kết nối
			fmt.Fprintln(c, "Đóng kết nối do không đươc sử dụng")
			break MAIN_LOOP
		}
	}
}

func main() {
	fmt.Println("Server is online now!!!")

	// Khởi tạo biến chứa danh sách các kết nối theo tên người dùng
	connMap = make(map[string]net.Conn)

	// Lắng nghe (Listen) ở cổng 3000 sử dụng giao thức TCP
	l, err := net.Listen("tcp", ":3000")

	if err != nil {
		fmt.Println(err.Error())
		return
	}

	defer l.Close()

	for {
		// Chờ kết nối mới tới
		c, err := l.Accept()
		if err != nil {
			fmt.Println(err.Error())
			return
		}

		// Xử lý kết nối
		go conn_handler(c)
	}
}
