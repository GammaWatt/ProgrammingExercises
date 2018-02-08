package main

import (
    "fmt"
    "os"
    "bufio"
)


func main() {
    reader := bufio.NewScanner(os.Stdin)
    reader.Scan()
    text := reader.Text()
//    text, err := reader.ReadString('\n')

    fmt.Println(text)

    reader.Scan()
    text = reader.Text()
//    text, err := reader.ReadString('\n')

    fmt.Println(text)
}
