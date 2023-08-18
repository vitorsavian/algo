package search

import "fmt"

func NewArraySearch(number int) []int {
	var array []int

	for i := 0; i < number; i++ {
		array = append(array, i)
	}

	return array
}

func FindNumber(number int, array []int) bool {

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

	return itHas
}
