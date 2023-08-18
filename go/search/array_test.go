package search_test

import (
	"testing"

	"github.com/vitorsavian/algo/search"
)

func TestBinarySearch(t *testing.T) {
	arr := search.NewArraySearch(1000)
	result := search.FindNumber(24, arr)

	if !result {
		t.Fatalf("this test is wrong because it returned false in the FindNumber\n")
	}
}
