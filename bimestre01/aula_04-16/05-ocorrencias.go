package main

import "fmt"

func main() {
  var frase string = "ANA E MARIANA GOSTAM DE BANANA"
  var palavra string = "ANA"

  fmt.Print(count_substring_occurrences(frase, palavra))
}

func count_substring_occurrences(frase string, palavra string) int {
  c := 0
  i := 0
  for i <= len(frase) - len(palavra) {
    k := i
    j := 0
    for j < len(palavra){
      if (palavra[j] != frase[k]) {
        break
      }
      j++
      k++
    }
    
    if j == len(palavra) {
      c++
    }
    
    i++
  }
  
  return c
}