package selectsort_test

import (
	"testing"

	selectsort "github.com/vitorsavian/algo/select"
)

func TestSelect(t *testing.T) {
	arr := selectsort.NewArray(100)
	selectsort.SortByLower(&arr)
//	var lastLower int
//	t.Log(sorted)
//	for index, value := range sorted {
//		if index == 0 {
//			lastLower = value
//			continue
//		}
//
//		if value < lastLower {
//			t.Fatalf("%d index is lower than %d index %d\n", lastLower, value, index)
//		}
//
//		lastLower = value
//	}
}
