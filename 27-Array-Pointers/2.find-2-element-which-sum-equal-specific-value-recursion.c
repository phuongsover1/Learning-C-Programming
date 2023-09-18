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

int findTwoElementsSumEqualToSpecificValueRecursion(int *arrPtr, int size,int sum) {

  if (size >= 2) {
    if (*arrPtr + *(arrPtr + size - 1) == sum) {
      return 1;
    } else if (*arrPtr + *(arrPtr + size - 1) > sum)
      return findTwoElementsSumEqualToSpecificValueRecursion(arrPtr, size - 1, sum);
    else 
      return findTwoElementsSumEqualToSpecificValueRecursion(++arrPtr, size - 1, sum);
  }
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
  result = findTwoElementsSumEqualToSpecificValueRecursion(arr, size, sum);
  printf("Result = %d\n", result);
  return 0;
}
