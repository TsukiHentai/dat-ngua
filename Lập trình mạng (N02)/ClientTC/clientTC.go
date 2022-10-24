package main

import (
	"bufio"
	"fmt"
	"net"
	"os"
	"strings"
)

// func TimeOut(c net.Conn) {
// 	for {
// 		message, err := bufio.NewReader(c).ReadString('\n')
// 		if err != nil {
// 			fmt.Println(err.Error())
// 			return
// 		}
// 		fmt.Println("Server nói: " + message)
// 	}
// }

func main() {
	fmt.Println("Xin chào đây là Client!")

	// Khởi tao kết nối đến server ở đia chỉ 127.0.0.1, và cổng dịch vụ 3000
	c, err := net.Dial("tcp", "127.0.0.1:3000")
	if err != nil {
		fmt.Println(err.Error())
		return
	}

	// Đóng kết nối sau khi chạy xong hàm main.
	defer c.Close()
	// Đọc thông báo từ server

	// Chờ 5 giây
	// time.Sleep(5 * time.Second)

	// Ghi vào kết nối một dòng ký tự
	// được đọc từ bàn phím
	reader := bufio.NewReader(os.Stdin)
	for {
		// go TimeOut(c)
		fmt.Print("Nhập dữ liệu: ")
		line, err := reader.ReadString('\n')
		if err != nil {
			fmt.Println(err.Error())
			return
		}

		fmt.Fprintln(c, line)

		if strings.TrimSpace(line) == "STOP" {
			// if string(data) == "STOP\n" {
			fmt.Println("Đóng kết nối đến server")
			break
		}
	}
}
