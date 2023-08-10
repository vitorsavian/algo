package main

import (
	"binary-search/search"
	"fmt"
)

func mainArray() {
	array := search.NewArraySearch(1000)
	number := 24

	high := len(array) - 1
	low := 0
	
	fmt.Printf("it begins with %d low and %d high\n", low, high)
	tries := 1 
	itHas := false

	for low <= high {
		middle := (low + high) / 2
		guess := array[middle]

		if guess == number {
			fmt.Println("------------------------------------------")
			fmt.Printf("your number is %d\nafter %d tries we could find\n", number, tries)
			fmt.Println("------------------------------------------")
			itHas = true
			break
		} else if guess > number {
			high = middle - 1
			tries++
		} else {
			low = middle + 1
			tries++
		}
	}

	if itHas == false {
		fmt.Println("------------------------------------------")
		fmt.Printf("after %d tries we couldn't find\n", tries)
		fmt.Println("------------------------------------------")
	}
}

func main() {
	mainArray()
}

