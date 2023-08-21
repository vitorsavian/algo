package search

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
	
	tries := 1 
	itHas := false

	for low <= high {
		middle := (low + high) / 2
		guess := array[middle]

		if guess == number {
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

	return itHas
}
