#include <stdio.h>
#include <stdlib.h>

// Given an array of integers [12,5,7,8,3,10,4,9]
// Create 2 dynamically allocated arrays
// First array will consist only of "Even Values" [12, 8 ,10,4]
// Second array will consist only of "Odd Values" [5,7,3,9]
// The function should simply print the values of both of the arrays
// Step2 - Return & Pass by Ref

void displayArray(int *arr, unsigned int size) {
  if (arr != NULL) {
    int i;
    for (i = 0; i < size; i++) {
      printf("arr[%d] = %d\n", i, arr[i]);
    }
  }
}

void createOddAndEvenArraysFromSouce(int *sourceArr, unsigned int sourceSize,
                                     int **oddArr, unsigned int *oddArrSize,
                                     int **evenArr, unsigned int *evenArrSize) {
  if (sourceArr == NULL)
    return;
  int countOdd = 0, countEven = 0;
  int lastIndexOddArr = 0, lastIndexEvenArr = 0;
  int i;
  for (i = 0; i < sourceSize; i++) {
    if (sourceArr[i] % 2 == 0)
      countEven++;
    else
      countOdd++;
  }

  *oddArrSize = countOdd;
  *evenArrSize = countEven;
  *oddArr = (int *)malloc(sizeof(int) * countOdd);
  *evenArr = (int *)malloc(sizeof(int) * countEven);
  if (*oddArr == NULL || *evenArr == NULL) {
    printf("Failed to malloc()\n");
    exit(EXIT_FAILURE);
  }
  for (i = 0; i < sourceSize; i++) {
    if (sourceArr[i] % 2 == 0) {
      *(*evenArr + lastIndexEvenArr) = sourceArr[i];
      ++lastIndexEvenArr;
    } else
      (*oddArr)[lastIndexOddArr++] = sourceArr[i];
  }
}
int main(void) {
  int mixOddEvenArr[] = {12, 5, 7, 8, 3, 10, 4, 9};
  unsigned int oddArrSize, evenArrSize;
  int *oddArr = NULL, *evenArr = NULL;
  createOddAndEvenArraysFromSouce(
      mixOddEvenArr, sizeof(mixOddEvenArr) / sizeof(mixOddEvenArr[0]), &oddArr,
      &oddArrSize, &evenArr, &evenArrSize);
  printf("Odd Array: \n");
  displayArray(oddArr, oddArrSize);

  printf("Even Array: \n");
  displayArray(evenArr, evenArrSize);
  free(oddArr);
  free(evenArr);
  return 0;
}