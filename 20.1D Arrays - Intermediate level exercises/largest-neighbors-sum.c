#include <stdio.h>

// Write a program thatt should calculate and print the largest sum of
// two Adjacent Elements in the Array

// Example #1: 1,4,3,7,1 --> 10
// Example #2: 5,7,1,5,2 --> 12

#define SIZE 100

int main() {
  int n, maxSum = 0;
  int array[SIZE];

  do {
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    if (n < 2)
      printf(
          "Length must be a positive number and larger than or equal to 2!!\n");
  } while (n < 2);

  for (int i = 0; i < n; i++) {
    printf("Enter value for array[%d]: ", i);
    scanf("%d", &array[i]);
  }
  maxSum = array[0] + array[1];

  for (int i = 1; i < n - 1; i++) {
    if (array[i] + array[i + 1] > maxSum)
      maxSum = array[i] + array[i + 1];
  }

  printf("The Largest Sum of Two Adjacent Element in the Array is %d\n",
         maxSum);
  return 0;
}
