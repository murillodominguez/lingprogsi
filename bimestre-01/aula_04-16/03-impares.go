package main

import "fmt"

func main() {
  var n int = 6
  
  i := 0
  c := 0
  for c < n{
    if i%2 == 1 {
      fmt.Println(i)
      c++
    }
    i++
  }
}