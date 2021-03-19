//variables-with-initializers.go

package main

import "fmt"

var i, j int = 1, 2

func main() {
	var c, py, java = true, false, "NO!"
	fmt.Println(i, j, c, py, java) // -> i = 1, j = 2, c = true, py = false, java = NO
}
