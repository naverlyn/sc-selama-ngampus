//multiple-results.go

package main

import "fmt"

func swap(x, y string) (string, string) {
	return y, x
}

func main() {
	a, b := swap("Aula Nur", "Rizal Ardiyantoro") //swap, a = Aula Nur, b = Rizal Ardiyantoro
	fmt.Println(a, b)                             // -> Rizal Ardiyantoro Aula Nur
}
