package main

import (
	"bufio"
	"fmt"
	"log"
	"net"
	"strconv"
	"sync"
	"time"
)

var wg sync.WaitGroup

func Proset(dia net.Conn) {
	var i int = 10
	for i != 0 {
		time.Sleep(1 * time.Second)
		i = i - 1

		fmt.Print("Giây thứ:" + strconv.Itoa(i) + " --- " + time.Now().Format(time.UnixDate) + "\n")
		if i == 0 {
			fmt.Println("Kết nối sẽ đóng lại")
			fmt.Fprintf(dia, "%s \n", "OFF")
		}
	}
}

func readMess(dia net.Conn) {
	scanner := bufio.NewScanner(dia)
	for scanner.Scan() {
		fmt.Println(scanner.Text())
	}
}

func main() {

	dia, err := net.Dial("tcp", "localhost:5555")

	if err != nil {
		log.Fatal(err)
	}

	wg.Add(1)
	go readMess(dia)
	wg.Add(1)
	go Proset(dia)
	wg.Wait()

}
