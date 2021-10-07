package main

import "fmt"

func main() {
	var A, B, T int
	fmt.Scan(&T)
	for T > 0 {
		fmt.Scan(&A, &B)
		if A > 0 && B > 0 {
			fmt.Println("Solution")
		} else if A > 0 && B == 0 {
			fmt.Println("Solid")
		} else if B > 0 && A == 0 {
			fmt.Println("Liquid")
		}
		T = T - 1
	}

}
