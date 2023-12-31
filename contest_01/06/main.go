package main

import "fmt"

func main() {
	var sum int32
	var sto, dva, pyat, tis, habar int32
	fmt.Scan(&sum)
	if sum >= 5000 {
		habar = sum / 5000
	}
	if sum >= 1000 {
		sum = sum % 5000
		tis = sum / 1000
	}
	if sum >= 500 {
		sum = sum % 1000
		pyat = sum / 500
	}
	if sum >= 200 {
		sum = sum % 500
		dva = sum / 200
	}
	if sum >= 100 {
		sum = sum % 200
		sto = sum / 100
	}
	fmt.Println(habar, tis, pyat, dva, sto)
}
