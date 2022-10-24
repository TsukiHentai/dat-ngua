package main

import (
	"bufio"
	"crypto/tls"
	"fmt"
	"log"
	"net"
)

func main() {
	fmt.Println("Server!")
	log.SetFlags(log.Lshortfile)

	cer, err := tls.LoadX509KeyPair("server-cert.pem", "key.unencrypted.pem")
	if err != nil {
		log.Println(err)
		return
	}

	config := &tls.Config{
		Certificates: []tls.Certificate{cer}}
	ln, err := tls.Listen("tcp", ":443", config)
	if err != nil {
		log.Println(err)
		return
	}

	for {
		conn, err := ln.Accept()
		if err != nil {
			log.Println(err)
			break
		}
		handleConnection(conn)
	}
	ln.Close()
}

func handleConnection(conn net.Conn) {
	defer conn.Close()
	r := bufio.NewReader(conn)
	for {
		msg, err := r.ReadString('\n')
		if err != nil {
			log.Println(err)
			break
		}

		println(msg)

		n, err := conn.Write([]byte("Hello there!\n"))
		if err != nil {
			log.Println(n, err)
			break
		}
	}
}
