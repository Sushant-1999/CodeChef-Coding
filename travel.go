package main

import "fmt"

func main() {
	var N, A, B, time, T int
	var S string
	time = 0

	fmt.Scan(&T)
	for i := 0; i < T; i++ {
		time = 0
		fmt.Scan(&N, &A, &B)
		fmt.Scan(&S)
		for j := 0; j < N; j++ {
			if S[j] == '0' {
				time = time + A
			} else if S[j] == '1' {
				time = time + B
			}
		}
		fmt.Println(time)
	}
}
