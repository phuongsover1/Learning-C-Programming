#include <stdio.h>

#define SIZE 100

void inputArray(int *arrPtr, int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("Enter value for arr[%d] = ", i);
    scanf("%d", &arrPtr[i]);
  }
}

void printArr(int *arrPtr, int size) {
  int i;
  for (i = 0; i < size; i++)
    printf("%d ", arrPtr[i]);
}

int findTwoElementsSumEqualToSpecificValue(int *ptrArr, int size, int value,
                                           int *index1, int *index2) {
  int i, j;
  for (i = 0, j = size - 1; j != i;) {
    if (*(ptrArr + i) + *(ptrArr + j) == value) {
      *index1 = i;
      *index2 = j;
      return 1;
    } else if (*(ptrArr + i) + *(ptrArr + j) < value) {
      i++;
    } else
      j--;
  }
  *index1 = *index2 = 0;
  return 0;
}
int main(void) {
  int arr[SIZE];
  int size, result, index1 ,index2, sum;

  do {
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0)
      puts("The size of array is not valid !!!");
  } while (size <= 0);

  inputArray(arr, size);

  printf("Enter the sum of two elements which you want to find: ");
  scanf("%d", &sum);
  result = findTwoElementsSumEqualToSpecificValue(arr, size, sum, &index1, &index2);
  printf("Result = %d, index1 = %d, index2 = %d\n", result, index1, index2);
  return 0;
}
