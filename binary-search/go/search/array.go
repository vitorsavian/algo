package search

func NewArraySearch(number int) []int {
	var array []int

	for i := 0; i < number; i++ {
		array = append(array, i)
	}

	return array
}


