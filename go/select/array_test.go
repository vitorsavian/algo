package selectsort_test

import (
	"testing"

	selectsort "github.com/vitorsavian/algo/select"
)

func TestSelect(t *testing.T) {
	arr := selectsort.NewArray(100)
	selectsort.SortByLower(&arr)
	lastLower := arr[0]
	for index, value := range arr {
		if value < lastLower {
			t.Fatalf("%d index is lower than %d index %d\n", lastLower, value, index)
		}

		lastLower = value
	}
}
