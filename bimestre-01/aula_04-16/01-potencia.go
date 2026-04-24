package main

import "fmt"

func main() {
	var base int
	var exp int

	base = -4
  exp = 2
  
  resultado := pot(base, exp)
  
  if resultado != -1 {
	  fmt.Printf("%d elevado a %d é %d", base, exp, resultado)
  }
}

func pot(x int, y int) int {
  if y < 0 {
    fmt.Print("O expoente deve ser um inteiro não-negativo.")
    return -1
  }
  
	if y == 0 {
	  if x == 0 {
	    fmt.Print("0 elevado a 0 é uma indeterminação matemática.")
	    return -1
	  }
		return 1
	}

	resultado := x

	i := 2
	for i <= y {
		resultado = resultado * x
		i++
	}

	return resultado
}
