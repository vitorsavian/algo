package selectsort

import (
	"fmt"
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

func SortByHigher(array *[]int) *[]int {
	sorted := []int{}
	
	higher := 1
	var lastHighest int

	for range *array {
		for _, v := range *array {
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

func SortByLower(array *[]int) {
	n := len(*array)
   	for i := 0; i < n-1; i++ {
     		minIndex := i
   		for j := i + 1; j < n; j++ {
   	         	if (*array)[j] < (*array)[minIndex] {
   	             		minIndex = j
   	         	}
   	     	}
   	     	(*array)[i], (*array)[minIndex] = (*array)[minIndex], (*array)[i]
   	}
	fmt.Println(array)
}
