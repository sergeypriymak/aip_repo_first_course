package main

import (
 "fmt"
)

func main() {
 var n int
 fmt.Scan(&n)

 values := make([]int, n)
 for i := 0; i < n; i++ {
  fmt.Scan(&values[i])
 }

 smoothedValues := make([]float64, n)
 smoothedValues[0] = float64(values[0])
 smoothedValues[n-1] = float64(values[n-1])

 for i := 1; i < n-1; i++ {
  smoothedValues[i] = (float64(values[i-1]) + float64(values[i]) + float64(values[i+1])) / 3
 }

 for _, value := range smoothedValues {
  fmt.Printf("%.7f ", value)
 }
}
