
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
  int *arr = CreateAndPopulateArray(size);
  int valueToFind = 86;
  int index = size/2;
  int tmp;
  int found = 0;

  switch (index < valueToFind) {
    case true:
      while(index < valueToFind) {
        tmp = (index + size)/2;
        if (tmp < valueToFind) {
          index = tmp;
        } else if (tmp == valueToFind) {
          DeleteArray(arr);
          return tmp;
        } else {
          break;
        }
      }

      for (int i = index; i < valueToFind; i++) {
        if (arr[i] == valueToFind) {
          DeleteArray(arr);
          break;
        }
      }
      break;
    case false:
      while(index > valueToFind) {
        tmp = index/2;
        if (tmp > valueToFind) {
          index = tmp;
        } else if (tmp == valueToFind) {
          DeleteArray(arr);
          return tmp;
        } else {
          break;
        }
      }
      for (int i = index; i > valueToFind; i--) {
        if (arr[i] == valueToFind) {
          DeleteArray(arr);
          return i;
        }
      }
  }

  DeleteArray(arr);
  return 0;
}
