package main

import (
    "fmt"
)

func strcomp(x, y []byte) bool {
    if len(x) != len(y) {
        return false
    } else {
        for i:=0; i < len(x); i++ {
            if x[i] != y[i] {
                return false
            }
        }
    }
    return true
}
func main() {
    s := []byte {'h', 'e', 'l', 'l', 'o'}
    b := []byte {'h', 'e', 'l', 'l', 'o'}
    v := strcomp(s,b)
    fmt.Println(v)
}
