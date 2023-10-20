#include <stdio.h>
#include <stdlib.h>

// Given a sorted array of integers [1,3,3,5,6,7,7,7,8,12,12]
// Create a new, dynamically allocated array, with no duplicates
// [1,3,5,6,7,8,12,12]

void displayArray(int *arr, unsigned int size) {
  if (arr != NULL) {
    int i;
    for (i = 0; i < size; i++) {
      printf("arr[%d] = %d\n", i, arr[i]);
    }
  }
}

int *createNoDuplexArray(int *sourceArray, int size, int *noDupArrSize) {
  int i;
  int count = 1;
  int *noDuplexArray;
  int lastIndex = 0;
  for (i = 0; i < size - 1; i++)
    if (sourceArray[i] != sourceArray[i + 1])
      count++;
  *noDupArrSize = count;
  noDuplexArray = (int *)malloc(count * sizeof(int));
  if (noDuplexArray == NULL) {
    puts("Failed to malloc");
    exit(EXIT_FAILURE);
  }
  for (i = 0; i < size - 1; i++) {
    if (sourceArray[i] == sourceArray[i + 1] && i != size - 2) {
      continue;
    }
    noDuplexArray[lastIndex++] = sourceArray[i];
    if (i == size - 2) {
      if (sourceArray[size - 2] != sourceArray[size - 1])
        noDuplexArray[lastIndex++] = sourceArray[size - 1];
    }
  }
  return noDuplexArray;
}
int main(void) {
  int dupArr[] = {1, 3, 3, 5, 6, 7, 7, 7, 8, 12, 12};
  int dupArrSize = 11;
  int noDupArrSize;
  int *noDupArr = createNoDuplexArray(dupArr, 11, &noDupArrSize);

  displayArray(noDupArr, noDupArrSize);
  free(noDupArr);
  return 0;
}