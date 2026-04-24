package main

import "fmt"

func main() {
  var fahr float64 = 10
  
  fmt.Printf("%.2f°F = %.2f°C", fahr, fahr_to_celsius(fahr))
}

func fahr_to_celsius(fahr float64) float64 {
  return (fahr - 32) * 5 / 9
}