#include "search.h"
#include <stdlib.h>
#include <CUnit/CUnit.h>

int* newArray(int size) {
	int* arr = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
	}
	return arr;
}

int freeArray(int* array) {
	if (array == NULL){
		return 1;
	}

	free(array);
	return 0;
}

