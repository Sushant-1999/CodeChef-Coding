package main

import "fmt"

func main() {
	var tmpl = `<tr><td>%s</td></tr>`
	fmt.Printf("<table>")
	names := []string{"john", "jim"}
	for _, v := range names {
		fmt.Printf(tmpl, v)

	}
	data := `<html><body>
	<table>
		<tr><th>Heading 1</th><th>Heading two</th></tr>
		<tr><td>Data 11</td><td>Data 12</td></tr>
		<tr><td>Data 21</td><td>Data 22</td></tr>
		<tr><td>Data 31</td><td>Data 32</td></tr>
		<tr><td>Data 41</td><td>Data 42</td></tr>
	</table>
	</body>
	</html>
	`
	fmt.Println(data)

}
