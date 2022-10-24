package main

import (
	"bufio"
	"encoding/json"
	"fmt"
	"net"
	"os"
	"strings"
	// "gitlab.com/fit-vimaru/ltm-2021-2/vi-du/cmd/thong-diep-v2/types"
)

type Packet struct {
	Type string // Loại bản tin (PING, LOGIN, USERS, SEND)
	From string // Người gửi
	To   string // Người nhận
	Data string // Nội dung thông điệp hoặc tên đăng nhập
}

func receive(c net.Conn) {
	for {
		// Nhận dòng dữ liệu từ server
		message, err := bufio.NewReader(c).ReadString('\n')
		if err != nil {
			fmt.Println(err.Error())
			return
		}
		fmt.Println("Command: " + message)
	}
}

func sendPacket(c net.Conn, pkt *Packet) error {
	pktMessage, err := json.Marshal(pkt)
	if err != nil {
		return err
	}
	// Gửi dữ liệu đi
	fmt.Fprintf(c, "%s\n", string(pktMessage))
	return nil
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

	// Đọc dữ liệu nhận được
	go receive(c)

	// Gửi dữ liệu từ client -> server
	reader := bufio.NewReader(os.Stdin)

MAIN_LOOP:
	for {

		fmt.Println("Lựa chọn một trong các chức năng sau:")
		fmt.Println("1. Đăng nhập")
		fmt.Println("2. Hiện danh sách người dùng")
		fmt.Println("3. Gửi tin nhắn")
		fmt.Println("4. Thoát")
		line, err := reader.ReadString('\n')
		if err != nil {
			fmt.Println(err.Error())
			return
		}
		switch strings.TrimSpace(line) {
		case "1":
			fmt.Print("Tên đăng nhập: ")
			username, err := reader.ReadString('\n')
			if err != nil {
				fmt.Println(err)
				break
			}
			username = strings.TrimSpace(username)
			pkt := Packet{
				Type: "LOGIN",
				Data: username,
			}

			if err := sendPacket(c, &pkt); err != nil {
				fmt.Println(err)
			}
		case "2":
			pkt := Packet{
				Type: "USERS",
			}

			if err := sendPacket(c, &pkt); err != nil {
				fmt.Println(err)
				break MAIN_LOOP
			}

		case "3":
			fmt.Print("Nhập tên người nhận: ")
			username, err := reader.ReadString('\n')
			if err != nil {
				fmt.Println(err)
				break
			}
			username = strings.TrimSpace(username)
			fmt.Print("Nhập nội dung tin nhắn: ")
			message, err := reader.ReadString('\n')
			if err != nil {
				fmt.Println(err)
				break
			}
			message = strings.TrimSpace(message)
			pkt := Packet{
				Type: "SEND",
				To:   username,
				Data: message,
			}

			if err := sendPacket(c, &pkt); err != nil {
				fmt.Println(err)
				break MAIN_LOOP
			}
		case "4":
			break MAIN_LOOP
		}
	}
}
