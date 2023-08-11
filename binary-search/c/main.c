#include <stdio.h>
#include "search.h"

#define THOUSAND 1000
#define NUMBER 25

int main() {
	int* arr = newArray(THOUSAND);

	int high = THOUSAND / 2;
	int low = 0;
	int guess = (high + low) / 2;
	int tries = 1;

	for (int i = 0; i < THOUSAND; i++) {

		if (arr[i] == NUMBER) {
			printf("just found your %d number at %d tries\n", NUMBER, tries);
			return 0;
		};

		if (arr[i] > guess) {
			low = guess;
			guess = (high + low) / 2;
			tries++;
			continue;
		};

		if (arr[i] < guess) {
			high = guess;
			guess = (high + low) / 2;
			tries++;
			continue;
		}
	};

	int result = freeArray(arr);
	if (result != 0) {
		printf("error in the free array function\n");
		return 1;
	};

	return 1;
}
