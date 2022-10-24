package main

import (
	"crypto/rand"
	"crypto/tls"
	"fmt"
	"log"
	"net"
)

func handleConnection(c net.Conn) {

	log.Printf("Client(TLS) %v connected via secure channel.", c.RemoteAddr())

	// stuff to do... like read data from client, process it, write back to client
	// see what you can do with (c net.Conn) at
	// http://golang.org/pkg/net/#Conn

	// buffer := make([]byte, 4096)

	// for {
	// 	n, err := c.Read(buffer)
	// 	if err != nil || n == 0 {
	// 		c.Close()
	// 		break
	// 	}
	// 	n, err = c.Write(buffer[0:n])
	// 	if err != nil {
	// 		c.Close()
	// 		break
	// 	}
	// }
	// log.Printf("Connection from %v closed.", c.RemoteAddr())
}

func main() {
	cert, err := tls.LoadX509KeyPair("server.pem", "server.key")
	if err != nil {
		log.Fatal(err)
	}
	config := tls.Config{Certificates: []tls.Certificate{cert}, ClientAuth: tls.RequireAnyClientCert}
	config.Rand = rand.Reader
	ln, err := tls.Listen("tcp", ":6600", &config)
	if err != nil {
		log.Fatal(err)
	}

	fmt.Println("Server(TLS) up and listening on port 6600")

	for {
		conn, err := ln.Accept()
		if err != nil {
			log.Println(err)
		}
		fmt.Println("Có kết nối mới")
		go handleConnection(conn)
	}
}
