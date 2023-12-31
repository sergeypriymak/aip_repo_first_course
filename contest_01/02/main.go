package main

import ("fmt"
		"math")

func main() {
	dub := 20
	topol := 32
	var oxygen float64 = 365 * 0.5
	var oxdub float64 = float64(oxygen) / float64(dub)
	var oxtopol float64 = float64(oxygen) / float64(topol)
	fmt.Println(oxygen,math.Round(oxtopol),math.Round(oxdub+0.5)) 

}
