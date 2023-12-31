package main

import (
	"fmt"
	"sort"
)

func main() {
	var n, x int
	fmt.Scan(&n, &x)

	numbers := make([]int, n)
	for d := 0; d < n; d++ {
		fmt.Scan(&numbers[d])
	}

	sort.Ints(numbers)

	d, k := 0, n-1
	for d < k {
		if numbers[d]+numbers[k] == x {
			fmt.Println(numbers[d], numbers[k])
			return
		} else if numbers[d]+numbers[k] < x {
			d++
		} else {
			k--
		}
	}

	fmt.Println(0, 0)
}
