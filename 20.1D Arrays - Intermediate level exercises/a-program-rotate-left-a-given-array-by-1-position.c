#include <stdio.h>

/*
 * Write a program that should rotate left  a given array by 1 position
 *
 * Before: 5, 4, 7, 3
 * After: 4, 7, 3, 5
 */

#define SIZE 100

int main() {
  int n, firstValueTemp;
  int arr[SIZE] = {0};

  do {
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    if (n < 1)
      printf("The length is not valid!!!\n");
  } while (n < 1);

  for (int i = 0; i < n; i++) {
    printf("Enter value for arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  firstValueTemp = arr[0];

  for (int i = 1; i < n; i++) 
    arr[i-1] = arr[i];
  arr[n-1] = firstValueTemp;

  printf("Array after rotate left 1 position:  ");
  for (int i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
