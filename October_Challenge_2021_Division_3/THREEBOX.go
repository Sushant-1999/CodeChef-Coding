package main

import "fmt"

func main() {
	var A, B, C, D, quo, rem, sum, T int
	fmt.Scan(&T)
	for T > 0 {
		fmt.Scan(&A, &B, &C, &D)
		sum = A + B + C
		quo = sum / D
		rem = sum % D
		if rem > 0 {
			fmt.Println(quo + 1)
		} else {
			fmt.Println(quo)
		}
		T = T - 1
	}

}
