package main

import "fmt"

func main() {
	var A, B, C, D, E, T int
	fmt.Scan(&T)

	for i := 0; i < T; i++ {
		fmt.Scan(&A, &B, &C, &D, &E)
		// Now comes 3 conditions
		if (A+B) <= D && C <= E {
			fmt.Println("YES")
		} else if (B+C) <= D && A <= E {
			fmt.Println("YES")
		} else if (A+C) <= D && B <= E {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}

	}

}
