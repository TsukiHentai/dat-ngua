package main

import (
	"crypto/tls"
	"log"
)

func main() {

	cert, err := tls.LoadX509KeyPair("client.pem", "client.key")
	if err != nil {
		log.Fatal(err)
	}
	hostName := "127.0.0.1"
	portNum := "6600"
	log.Printf("Connecting to %s\n", hostName)
	config := tls.Config{Certificates: []tls.Certificate{cert}, InsecureSkipVerify: true}
	conn, err := tls.Dial("tcp", hostName+":"+portNum, &config)
	if err != nil {
		log.Fatal(err)
	}

	// defer conn.Close()

	log.Printf("Connection established between %s and localhost.\n", conn.RemoteAddr().String())

	// n, err := conn.Write([]byte("hello\n"))
	// if err != nil {
	// 	log.Println(n, err)
	// 	return
	// }
	// buf := make([]byte, 100)
	// n, err = conn.Read(buf)
	// if err != nil {
	// 	log.Println(n, err)
	// 	return
	// }
	// println(string(buf[:n]))

}
