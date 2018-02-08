package main

import "fmt"

func main() {
    var s string = "licking-for-stickers-farbucks"

    var word_len int = 0
    for i := 0; i < len(s); i++ {
        //fmt.Print("s[i] => s[", i, "] => ")
        //fmt.Print(string(s[i]))
        //fmt.Println("")
        for s[i] != '-' && i < len(s)-1 { // without len(s)-1, there's an out of bounds exception
            //fmt.Print("until '-' :: \t i: ", i, " s[i]: ", string(s[i]), "\n")
            word_len++
            i++
        }
        if i == len(s)-1 { // bandaid solution to recoup the missed cycle at last char of string
            word_len++
            i++
        }
        //fmt.Println("word_len: ", word_len, "\t", "i: ", i)
        var word []rune = make([]rune, word_len)
        for j := 0; j < word_len; j++ {
            //fmt.Println("i: ", i, " - ", "word_len: ", word_len, " + ", "j: ", j, " = ", i - word_len + j)
            word[j] = rune(s[i-word_len + j])
        }
        word_len = 0
        fmt.Print(string(word), " ")
    }
    fmt.Println("hi")
}

