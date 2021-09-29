package main

import (
	"fmt"
	"strings"
)

type Date struct {
	date  string
	month string
}

func CheckChrist(date Date) (ans bool) {
	if date.date == "24" || date.date == "25" {
		res := strings.ToLower(date.month)
		if res == "december" {
			ans = true
		}
	} else {
		ans = false
	}
	return ans
}

func main() {
	// input date object
	date := Date{}
	var ans bool
	fmt.Scan(&date.date)
	fmt.Scan(&date.month)

	ans = CheckChrist(date)

	fmt.Println(ans)

}
