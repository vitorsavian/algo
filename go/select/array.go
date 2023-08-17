package selectsort

import (
	"math/rand"
	"time"
)

func NewArray(size int) []int {
	arr := []int{}

	random := rand.New(rand.NewSource(time.Now().UnixNano()))

	for i := 1; i <= size; i++ {
		arr = append(arr, random.Intn(100))
	}

	return arr
}

func SortByHigher(array []int, arraySize int) *[]int {
	sorted := []int{}
	
	higher := array[0]
	var lastHighest int

	for i := 0; i < arraySize; i++ {
		for _, v := range array {
			if v >= higher {
				if lastHighest != higher && v > lastHighest {
					continue
				}
			 	higher = v
			}
		}
		lastHighest = higher
		sorted = append(sorted, higher)
	}

	return &sorted
}

func SortByLower(array *[]int, arraySize int) *[]int {
	sorted := []int{}
	
	lower := -1
	lastLower := -1
	
	for i := 0; i < arraySize; i++ {
		for _, v := range *array {
			if v <= lower {
				if lastLower != lower && v < lastLower {
					continue
				}

				lower = v
			}
		}
		lastLower = lower
		sorted = append(sorted, lower)
	}
	return &sorted
}
