
int* CreateAndPopulateArray(int size) {
  int *array = new int[size];

  for(int i = 0; i < size; i++) {
    array[i] = i;
  }

  return array;
}

void DeleteArray(int *array) {
  delete[] array;
}

int Search(int size) {
  return 0;
}
