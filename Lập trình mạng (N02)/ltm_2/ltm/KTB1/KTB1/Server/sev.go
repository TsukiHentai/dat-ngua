package main

import (
	"bufio"
	"fmt"
	"log"
	"net"
	"strconv"
	"strings"
	"time"
)

var (
	sumClient       = 0
	countConnecting = 0
)

func inConn(c net.Conn) {
	clientCount := c.LocalAddr().String()
	ip := strings.Split(clientCount, ":")[0]
	port := strings.Split(clientCount, ":")[1]

	fmt.Println("\n********************************")
	fmt.Printf("\nThiết bị mới \n Ip: %s \n Port: %s", ip, port)
	fmt.Println("\n********************************")
	sumClient += 1
	countConnecting += 1
	msg := "Xin chào !\n"
	c.Write([]byte(msg))
	c.Write([]byte("\nSố kết nối đang hoạt động / tổng số kết nối !" + strconv.Itoa(countConnecting) + "/" + strconv.Itoa(sumClient) + "\n"))
}

func Out() {
	countConnecting -= 1
}

func conHandler(c net.Conn) {
	defer c.Close()
	inConn(c)
	for {
		jsonString, err := bufio.NewReader(c).ReadString('\n')

		if err != nil {
			log.Print(err)
		}

		x := strings.ReplaceAll(jsonString, "[", "")
		x = strings.ReplaceAll(x, "]", "")

		params := strings.Split(x, " ")

		if strings.Compare(params[0], "OFF") == 0 {
			Out()
			c.RemoteAddr().Network()
			return
		}
	}
}

func PrintCount() {
	var i int = 0
	for i >= 0 {
		i = i + 1
		time.Sleep(1 * time.Second)
		fmt.Println("\nSố kết nối đang hoạt động :" + strconv.Itoa(countConnecting) + "\n")
	}
}

func main() {
	server, err := net.Listen("tcp", "localhost:5555")
	if err != nil {
		log.Fatal(err)
		return
	}
	go PrintCount()
	for {
		conn, err := server.Accept()
		if err != nil {
			log.Fatal(err)
		}
		go conHandler(conn)
	}
}
