// Exercise - Recursions & Array !//
// Develop a recursive function that receives an array of integers and its size.
// The function should calculate and return the Maximum Sum of two adjacent
// elements

// For example:
//   arr = 1, 2, 4, 3 ,1 -> size = 5 --> 7
//   arr = 9, 2, 4, 5, 3 -> size = 5 --> 11
#include <stdio.h>

#define SIZE 100
int findMaxSumInArray(int *arr, int size);

int main(void) {

  int n;
  int arr[SIZE];

  do {
    printf("Enter the size of array: ");
    scanf("%d", &n);
    if (n <= 0)
      printf("The size is not valid!!!\n");
  } while (n <= 0);

  for (int i = 0; i < n; i++) {
    printf("Enter the value arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }

  printf("Maximum sum of the array = %d\n", findMaxSumInArray(arr, n));
  return 0;
}

int findMaxSumInArray(int *arr, int size) {
  if (size == 1)
    return 0;
  int maxSumOfNextTwoElement = findMaxSumInArray(arr + 1, size - 1);
  int currentTwoElementSum = *arr + *(arr + 1);
  return currentTwoElementSum > maxSumOfNextTwoElement ? currentTwoElementSum
                                                       : maxSumOfNextTwoElement;
}
