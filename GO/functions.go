//functions.go
package main

import "fmt" // import default

func add(x int, y int) int {
	return x + y // x + y = z
	return x - y
}

func main() {
	fmt.Println(add(41, 113)) // isian x dan y, x = 41, y = 113
	fmt.Println(add(41, 22))
}
