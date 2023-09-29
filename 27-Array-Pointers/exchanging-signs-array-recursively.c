// Exercise - Recursion & Arrays //
// Develop a recursive function that receives an array of integers and its size.
// The Function should return:
//     - 1, if every two adjacent elemnts have the opposite sign.
//     - 0, otherwise (at least one pair of adjcent elements with the same
//     sign).
//
// For example :
//     arr = -1,2,-4 size = 3 --> 1
//     arr = 1,-2,4,5, -3 size = 5 --> 0
#include <stdio.h>

#define SIZE 100

int checkExchangingSignsInArray(int *arr, int size);

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

  printf("result = %d\n", checkExchangingSignsInArray(arr, n));
  return 0;
}

int checkExchangingSignsInArray(int *arr, int size) {
  if (size == 1)
    return 1;
  if (*arr * *(arr + 1) > 0)
    return 0;
  return checkExchangingSignsInArray(++arr, size - 1);
}
