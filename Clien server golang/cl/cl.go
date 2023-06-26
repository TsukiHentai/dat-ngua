package main

import (
	"bufio"
	"crypto/tls"
	"fmt"
	"log"
	"net"
	"os"
	"strings"
)

func onMessage(conn net.Conn) { //Nhận tin nhắn
	for {
		reader := bufio.NewReader(conn)
		msg, _ := reader.ReadString('\n')
		fmt.Print(msg)
		fmt.Print("Chat:")
	}
}

func main() {
	cert, err := tls.LoadX509KeyPair("client.pem", "client.key")
	if err != nil {
		log.Fatal(err)
	}
	hostName := "127.0.0.1"
	portNum := "6600"
	log.Printf("Connecting to %s\n", hostName)
	config := tls.Config{Certificates: []tls.Certificate{cert}, InsecureSkipVerify: true}
	connection, err := tls.Dial("tcp", hostName+":"+portNum, &config)
	if err != nil {
		log.Fatal(err)
	}
	// connection, err := net.Dial("tcp", "localhost:3000")
	// if err != nil {
	// 	log.Fatal(err)
	// }
	fmt.Print("Client is online now gogogo!!!\n")
	fmt.Print(" What your name:")
	nameReader := bufio.NewReader(os.Stdin)
	nameInput, _ := nameReader.ReadString('\n')

	// nameInput = nameInput[:len(nameInput)-1]

	fmt.Println("********** MESSAGES **********")
	go onMessage(connection)
	fmt.Print("Chat:")
	for {
		// fmt.Print("Chat:")
		msgReader := bufio.NewReader(os.Stdin)
		msg, err := msgReader.ReadString('\n')
		if err != nil {
			break
		}
		if strings.TrimSpace(msg) == "STOP" {
			fmt.Println("Client off now!!! ")
			fmt.Println("Bye!!!")
			break
		}
		nameInput = strings.Replace(nameInput, "\r\n", "", -1)
		msg = strings.Replace(msg, "\r\n", "", -1)
		msg = fmt.Sprintf("%s : %s\n", nameInput, msg)
		// nameInput += msg
		// fmt.Print(msg)
		// msg = fmt.Sprintf("%s : %s\n", nameInput, msg[:len(msg)-1])
		connection.Write([]byte(msg))
	}

	connection.Close()
}
