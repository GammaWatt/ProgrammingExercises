package main

import "fmt"
//import "strconv"

func hash(y []rune) int{
    var char int
    var index int = 0
    // Prime numbers are very important in hashing and cryptography
    for i := 0; i < len(y) ; i++ {
        char = int(y[i] + 0)
        index += char * 31
        fmt.Println("y[i]: ", string(y[i]), "(int)y[i]: ", y[i] + 0,  "\t char: ", char, "\t index: ", index)
    }
    index = index % 181
    fmt.Println("final index: ", index)
    return index
}

func main() {
    var s string = "licking-suckers-for-stickers-farbucks"

    fmt.Println(hash([]rune(s)))
}

