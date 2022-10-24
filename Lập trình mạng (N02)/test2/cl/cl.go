package main

import (
	"bufio"
	"fmt"
	"net"
	"os"
	"strings"
	"time"
)

func ping(c net.Conn) {
	for {
		fmt.Fprintln(c, "PING")
		time.Sleep(5 * time.Second)
	}
}

func docDuLieu(c net.Conn) {
	for {
		// Nhận dòng dữ liệu từ server
		message, err := bufio.NewReader(c).ReadString('\n')
		if err != nil {
			fmt.Println(err.Error())
			return
		}

		fmt.Println("Rev: " + message)
	}
}

func main() {
	fmt.Println("Client!")

	// Khởi tạo kết nối TCP đến server ở địa chỉ 127.0.0.1, cổng 3000
	c, err := net.Dial("tcp", "127.0.0.1:3000")

	if err != nil {
		fmt.Println(err.Error())
		return
	}

	defer c.Close()

	// Thực hiện ping 5 giây 1 lần
	go ping(c)

	// Đọc dữ liệu từ server
	go docDuLieu(c)

	// Gửi dữ liệu từ client -> server
	reader := bufio.NewReader(os.Stdin)
	for {
		fmt.Print("Nhập một dòng: ")
		line, err := reader.ReadString('\n')
		if err != nil {
			fmt.Println(err.Error())
			return
		}

		fmt.Fprint(c, line)

		if strings.TrimSpace(line) == "STOP" {
			break
		}
	}
}
