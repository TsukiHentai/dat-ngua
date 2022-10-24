package main

import (
	"bufio"
	"fmt"
	"net"
	"strings"
	"time"
)

var TongServerHienTai int = 0
var TongServer int = 0

// Xử lý kết nối
func conn_handler(c net.Conn) {
	// Gửi 1 dòng dữ liệu tới client
	fmt.Fprintln(c, "Xin chào!\n")
	// fmt.Fprintf(c, "Số kết nối đang hoạt động / tổng số kết nối: %d/%d\n ", TongServerHienTai, TongServer)
	// defer c.Close()
	// Đọc một dòng dữ liệu từ client
	for {
		data, err := bufio.NewReader(c).ReadString('\n')

		if err != nil {
			fmt.Println(err.Error())
			break
		}
		fmt.Println("DATA: " + string(data))
		if strings.TrimSpace(string(data)) == "STOP" {
			// if string(data) == "STOP\n" {
			fmt.Printf("Đóng kết nối đến client %s\n", c.RemoteAddr().String())
			// TongServerHienTai -= 1
			// fmt.Printf("Số kết nối đang hoạt động / tổng số kết nối: %d/%d\n ", TongServerHienTai, TongServer)
			break
		}
	}
	c.Close()
}
func TimeCount() {
	for {
		time.Sleep(1 * time.Second)
		fmt.Printf("Số kết nối đang hoạt động / tổng số kết nối: %d/%d\n ", TongServerHienTai, TongServer)
	}
}
func TenSeconds(c net.Conn) {
	var sum int = 10
	for {
		time.Sleep(1 * time.Second)
		fmt.Fprintf(c, "%d\n", sum)
		sum -= 1
		if sum < 0 {
			fmt.Fprintln(c, "Kết nối sẽ đóng lại!\n")
			TongServerHienTai -= 1
			c.Close()
			break

		}
	}
}

// Golang
func main() {
	fmt.Println("Xin chào đây là Server!")

	// Lắng nghe kết nối trên server
	l, err := net.Listen("tcp", ":3000")
	if err != nil {
		fmt.Println(err.Error())
		return
	}
	defer l.Close()
	// go TimeCount()
	for {
		c, err := l.Accept()
		if err != nil {
			fmt.Println(err.Error())
			continue
		}
		fmt.Printf("Có kết nối mới từ địa chỉ: %s\n", c.RemoteAddr().String())
		// TongServerHienTai += 1
		// TongServer += 1
		// fmt.Printf("Số kết nối đang hoạt động / tổng số kết nối: %d/%d\n ", TongServerHienTai, TongServer)

		go conn_handler(c)
		// go TenSeconds(c)
	}

	l.Close()
}
