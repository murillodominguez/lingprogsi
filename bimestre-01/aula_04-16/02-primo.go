package main

import "fmt"

func main() {
  var n int = 23
  
  if is_prime(n) {
    fmt.Printf("%d é primo.", n)
  } else {
    fmt.Printf("%d não é primo.", n)
  }
}

func is_prime(n int) bool {
  i := 2
  for i*i < n {
    if n%i == 0 {
      return false
    }
    i++
  }
  
  return true
}
