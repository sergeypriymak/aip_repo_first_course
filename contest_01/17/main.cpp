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

 leftMax := make([]int, n)
 rightMax := make([]int, n)

 leftMax[0] = values[0]
 for i := 1; i < n; i++ {
  leftMax[i] = max(leftMax[i-1], values[i])
 }

 rightMax[n-1] = values[n-1]
 for i := n - 2; i >= 0; i-- {
  rightMax[i] = max(rightMax[i+1], values[i])
 }

 water := 0
 for i := 0; i < n; i++ {
  water += min(leftMax[i], rightMax[i]) - values[i]
 }

 fmt.Println(water)
}

func max(a, b int) int {
 if a > b {
  return a
 }
 return b
}

func min(a, b int) int {
 if a < b {
  return a
 }
 return b
}
