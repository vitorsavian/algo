package array

func BinarySearch(arr []int, item int) int {
	low := 0
	high := len(arr) - 1

	for high >= low {
		guess := (high + low) / 2

		if guess == item {
			return guess
		}

		if guess > item {
			high = guess - 1
		} else {
			low = guess + 1
		}

	}

	return 0
}
