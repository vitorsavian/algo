package main

import "fmt"

const (
	BILLION = 1000000000
)

func main() {
	tries := 1 
	for i := 2; i < BILLION; i = i * 2 {
		tries++	
	}

	fmt.Printf("it needs %d tries == (O)log%d\n", tries, tries)
}

