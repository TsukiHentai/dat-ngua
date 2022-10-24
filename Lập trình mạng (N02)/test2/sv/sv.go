package main

import (
	"bufio"
	"fmt"
	"net"
	"strings"
	"sync"
	// "time"
)

// Lưu danh sách các kết nối
var connMap map[string]net.Conn
var connMapMutex sync.Mutex

// Xử lý kết nối
func conn_handler(c net.Conn) {
	defer c.Close()

	// Gửi 1 dòng dữ liệu tới client
	fmt.Printf("Có kết nối mới từ %v\n", c.RemoteAddr().String())
	fmt.Fprintln(c, "Xin chào!")

	login := ""

	// // Lần nhận lệnh ping cuối cùng
	// lastPing := time.Now()

	// Đọc một dòng dữ liệu từ client
	for {
		data, err := bufio.NewReader(c).ReadString('\n')
		if err != nil {
			fmt.Println(err.Error())
			// fmt.Printf("Lần ping cuối %v\n", lastPing)

			// Xóa người dùng khỏi hệ thống
			if login != "" {
				connMapMutex.Lock()
				if _, ok := connMap[login]; ok {
					delete(connMap, login)
					fmt.Printf("Xóa người  %s\n", login)
				}
				connMapMutex.Unlock()
			}

			break
		}
		line := strings.TrimSpace(string(data))

		if strings.HasPrefix(line, "LOGIN:") {
			username := strings.TrimSpace(line[len("LOGIN:"):])

			// Đảm bảo connMap chỉ đọc bởi 1 tiến trình
			connMapMutex.Lock()
			if _, ok := connMap[username]; !ok {
				// Người dùng này chưa được sử dụng
				connMap[username] = c
				login = username
				fmt.Fprintf(c, "Bạn đã đang nhập thành công dưới tên %s\n", username)
			} else {
				fmt.Fprintf(c, "Tên người dùng %s đã được sử dụng bởi kết nối khác!\n", username)
			}
			connMapMutex.Unlock()
			// } else if line == "PING" {
			// 	// Cập nhật lại lần nhận lệnh ping cuối cùng
			// 	// lastPing = time.Now()
			// 	fmt.Fprintln(c, "PONG")
		} else if line == "USERS" {
			fmt.Fprintln(c, "Danh sách người dùng:")
			// Đảm bảo connMap chỉ đọc bở 1 tiến trình
			connMapMutex.Lock()
			for k := range connMap {
				fmt.Fprintf(c, "%s\n", k)
			}
			connMapMutex.Unlock()
		} else if strings.HasPrefix(line, "SEND:") {
			params := strings.Split(line, ":")
			if len(params) > 2 {
				username := strings.TrimSpace(params[1])
				message := strings.TrimSpace(params[2])

				// Đảm bảo connMap chỉ đọc bởi 1 tiến trình
				connMapMutex.Lock()
				if v, ok := connMap[username]; ok {
					// Tìm thấy client có tên username
					// Gửi thông điệp tới client
					fmt.Fprintf(v, "FROM:%s:%s\n", login, message)
				}
				connMapMutex.Unlock()
			}
		}
	}
}

// Golang
func main() {
	fmt.Println("Server!")
	connMap = make(map[string]net.Conn)

	// Lắng nghe kết nối trên server
	l, err := net.Listen("tcp", ":3000")
	if err != nil {
		fmt.Println(err.Error())
		return
	}
	defer l.Close()

	for {
		c, err := l.Accept()
		if err != nil {
			fmt.Println(err.Error())
			return
		}

		// Xử lý mỗi client trên một goroutine mới
		go conn_handler(c)
	}
}
