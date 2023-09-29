#include <stdio.h>

// Exercise:
// Write a recursive function that:
//        - receives an arrayy and its size
//        = Returns the Average Value of the Array

// For example:
// Given Array: 1, 4 ,3, size = 3
// the function should return 2.66666.. (8/3);

#define SIZE 100

double findArrayAverage(int *arr, int size);

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

  printf("Average value of array = %lf\n", findArrayAverage(arr, n));

  return 0;
}

double findArrayAverage(int *arr, int size) {
  if (size == 1) 
    return (double)*arr;
  else if (size > 1) {
    int nextSizeToPassToNextRecursion = size - 1;
    double lastSum = findArrayAverage(arr + 1, nextSizeToPassToNextRecursion) * nextSizeToPassToNextRecursion;
    return  (lastSum + *arr) / size;
  }
  return 0;
}
