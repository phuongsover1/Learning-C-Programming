#include <stdio.h>
#include <stdlib.h>

int *generateArray(int size) {
  int i;
  int *arr;
  arr = (int *)malloc(size * sizeof(int));
  printf("Enter values for arr:\n ");
  for (int i = 0; i < size; i++)
    scanf("%d", &arr[i]);
  return arr;
}

void printArr(int *arr, int arrSize) {
  for (int i = 0; i < arrSize; i++)
    printf("%d ", arr[i]);

  printf("\n");
}

void swapO1(int **arr1, int **arr2) {
  int *temp = *arr1;
  *arr1 = *arr2;
  *arr2 = temp;

  printf("Arr1 in swap: \n");
  printArr(*arr1, 5);
  printf("Arr2 in swap: \n");
  printArr(*arr2, 5);
}

int main() {
  int *arr1 = NULL, *arr2 = NULL;
  int sizeArr1, sizeArr2;
  do {
    printf("Enter the size of the arr1: ");
    scanf("%d", &sizeArr1);
    if (sizeArr1 < 1)
      printf("The size is not valid!!!\n");
  } while (sizeArr1 < 1);

  arr1 = generateArray(sizeArr1);

  do {
    printf("Enter the size of the arr2: ");
    scanf("%d", &sizeArr2);
    if (sizeArr2 < 1)
      printf("The size is not valid!!!\n");
  } while (sizeArr2 < 1);

  arr2 = generateArray(sizeArr2);

  printf("Array1 before SWAP: \n");
  printArr(arr1, sizeArr1);
  printf("Array2 before SWAP: \n");
  printArr(arr2, sizeArr2);

  swapO1(&arr1, &arr2);

  printf("Array1 after SWAP: \n");
  printArr(arr1, sizeArr1);
  printf("Array2 after SWAP: \n");
  printArr(arr2, sizeArr2);

  return 0;
}
