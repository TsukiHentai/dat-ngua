package main

import (
	"crypto/tls"
	"fmt"
	"log"
)

func main() {
	cert, err := tls.LoadX509KeyPair("ca-cert.pem", "ca-key-not.pem")
	if err != nil {
		log.Println(err)
		return
	}
	conf := tls.Config{Certificates: []tls.Certificate{cert}, ClientAuth: tls.RequireAnyClientCert}
	// , InsecureSkipVerify: true
	conn, err := tls.Dial("tcp", "127.0.0.1:443", &conf)
	if err != nil {
		log.Println(err)
		return
	}
	defer conn.Close()

	n, err := conn.Write([]byte("hello\n"))
	if err != nil {
		log.Println(n, err)
		return
	}

	buf := make([]byte, 100)
	n, err = conn.Read(buf)
	if err != nil {
		log.Println(n, err)
		return
	}

	fmt.Println(string(buf[:n]))
}
