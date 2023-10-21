#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Write a function that reveices an array of integers.
// This function should be of a "void" type.
// Create an copy all the elements from the received array to a new one.
// The new array (copied) should be passed by reference to the caller function.

void printIntArray(int *arr, unsigned int size);
int *createArray(unsigned int size);
void initArray(int *arr, unsigned int size);
void freeMemory(void **ptr);

void copyIntArray(int **desArr, int *desArrSize, int *sourceArr,
                  int sourceArrSize, int numOfElements);

int main(void) {
  int sourceArrSize, desArrSize, numOfElementsToCopy;
  int *sourceArr = NULL, *desArr = NULL;

  printf("Enter the size of the source array: ");
  scanf("%d", &sourceArrSize);

  sourceArr = createArray(sourceArrSize);
  initArray(sourceArr, sourceArrSize);

  puts("Source Array: ");
  printIntArray(sourceArr, sourceArrSize);

  // Assign value for des array
  printf("Enter the size of the destination array: ");
  scanf("%d", &desArrSize);

  desArr = createArray(desArrSize);
  initArray(desArr, desArrSize);

  puts("Destination Array: ");
  printIntArray(desArr, desArrSize);

  printf("Enter number of elements you want to copy: ");
  scanf("%d", &numOfElementsToCopy);

  copyIntArray(&desArr, &desArrSize, sourceArr, sourceArrSize,
               numOfElementsToCopy);

  puts("Copied Array:");
  printIntArray(desArr, desArrSize);

  freeMemory((void **)&sourceArr);
  freeMemory((void **)&desArr);
  return 0;
}

void printIntArray(int *arr, unsigned int size) {
  while (size > 0) {
    printf("%d ", *arr);
    arr++;
    size--;
  }
  printf("\n");
}
int *createArray(unsigned int size) {
  return (int *)malloc(sizeof(int) * size);
}

void initArray(int *arr, unsigned int size) {
  if (arr != NULL) {
    int i;
    for (i = 0; i < size; i++) {
      printf("Enter value for arr[%d] = ", i);
      scanf("%d", &arr[i]);
    }
  }
}
void freeMemory(void **ptr) {
  free(*ptr);
  *ptr = NULL;
}

void copyIntArray(int **desArr, int *desArrSize, int *sourceArr,
                  int sourceArrsize, int numOfElements) {
  if (sourceArr == NULL) {
    puts("Source Array is NULL");
    return;
  }
  if (sourceArrsize <= 0) {
    puts("Source Array size less or equal zero");
    return;
  }
  if (numOfElements <= 0) {
    puts("numOfElements is less than or equal zero");
    return;
  }
  if (!desArr) {
    puts("desArr is NULL");
    return;
  }
  if (*desArr != NULL) {
    freeMemory((void **)desArr);
  }
  *desArrSize = numOfElements;
  *desArr = (int *)realloc(*desArr, sizeof(int) * *desArrSize);

  memcpy(*desArr, sourceArr, numOfElements * sizeof(int));
}