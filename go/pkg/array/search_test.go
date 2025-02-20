package array_test

import (
	"testing"

	"github.com/vitorsavian/algo/pkg/array"
)

func TestBinarySearch(t *testing.T) {
	arr := make([]int, 100)

	want := 27

	n := 1
	for n <= 100 {
		arr[n-1] = n
		n++
	}

	result := array.BinarySearch(arr, want)

	if want != result {
		t.Fatalf("Unable to get binary search right: %d", result)
	}
}
