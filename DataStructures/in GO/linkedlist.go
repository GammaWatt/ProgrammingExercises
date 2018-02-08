package main

import (
    "fmt"
    "strconv"
)

type node struct {
    value string
    next *node
}


func main() {
    var t node
    t.value = "hi #1"
    var n *node
    n = &t
    if n.next == nil {
        fmt.Println("goofy")
    }
    for i := 0; i < 7; i++ {
        n.next = new(node)
        n = n.next
        n.value = "hi " + strconv.Itoa(i) + " "
        fmt.Printf("%p\n", n)
    }
    n = &t
    for i :=0; i < 9; i++ {
        if n.next != nil {
            fmt.Println(n.value)
            n = n.next
        }
    }
}
