#include <stdio.h>

/*
 * Write a program that initializes an Array.
 * 3 elements should represent a date:
 * 1. Date
 * 2. Month
 * 3. Year
 * The program should create another array and copy the data from original
 * array.
 */

#define SIZE 3

int main() {
  int arr[SIZE] = {15, 5, 2001};
  int copiedArr[SIZE];

  for (int i = 0; i < SIZE; i++)
    copiedArr[i] = arr[i];

  printf("Array after copied: \n");
  for (int i = 0; i < SIZE; i++)
    printf("%d ", copiedArr[i]);
  return 0;
}
