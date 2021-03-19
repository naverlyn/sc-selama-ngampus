//short-variable-declarations.go

package main

import "fmt"

func main() {
	var i, j int = 1, 2
	k := 4 // := = langsung, tanpa ada isi var
	c, py, java := true, false, "NO!"

	fmt.Println(i, j, k, c, py, java)
}
