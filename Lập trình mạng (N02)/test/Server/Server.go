package main

import (
	"crypto/rand"
	"crypto/tls"
	"fmt"
	"log"
	"net"
)

func handleConnection(c net.Conn) {
	log.Printf("Client(TLS) %v connected.", c.RemoteAddr())

	defer c.Close()
	var buf [512]byte
	for {
		fmt.Println("Try to read")
		n, err := c.Read(buf[0:])
		if err != nil {
			fmt.Println(err)
		}
		_, err2 := c.Write(buf[0:n])
		if err2 != nil {
			fmt.Println(err2)
			return
		}
	}
}
func main() {
	cert, err := tls.LoadX509KeyPair("server.pem", "server.key")
	if err != nil {
		log.Fatal(err)
	}
	config := tls.Config{Certificates: []tls.Certificate{cert}, ClientAuth: tls.RequireAnyClientCert}
	config.Rand = rand.Reader
	ln, err := tls.Listen("tcp", ":443", &config)
	if err != nil {
		log.Fatal(err)
	}
	fmt.Printf("Server lissten on port 443")
	for {
		conn, err := ln.Accept()
		if err != nil {
			log.Println(err)
			continue
		}
		go handleConnection(conn)
	}
}
