package main

import "fmt"

func main() {
	var x int
	fmt.Scan(&x)
	cnt := 0
	for x != 1 {
		if x%2 == 0 {
			x = x / 2
			cnt += 1
		} else {
			cnt += 1
			x = x*3 + 1
		}
	}
	fmt.Println(cnt)
}
