package main

import (
	"fmt"
	"log"
	"time"
)

func main() {
	var T, i int64
	var G1, S1, B1, G2, S2, B2, tm1, tm2 int64
	start := time.Now()

	fmt.Scanln(&T)

	for i = 0; i < T; i++ {
		fmt.Scanln(&G1, &S1, &B1)
		fmt.Scanln(&G2, &S2, &B2)

		tm1 = G1 + S1 + B1
		tm2 = G2 + S2 + B2

		if tm1 > tm2 {
			fmt.Println(1)
		} else if tm2 > tm1 {
			fmt.Println(2)
		}
	}
	elapsed := time.Since(start)
	log.Printf("Binomial took %s", elapsed)

}
