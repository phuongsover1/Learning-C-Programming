#include <stdio.h>

// Exercise
// Develop 2 recursive function
// Both should receive an array and its size.

//  Func. A --> should print all array elements
//              from the leftmost value to the
//              rightmost value

// Func. B --> should print all array elements
//             from the rightmost value to the
//             leftmost value

// For example: Given array: 1,3,2,4
// Func A should print: 1 3 2 4
// Func B should print: 4 2 3 1

void printLeftMostElementsInArray(int *ptr, int size);
void printRightMostElementsInArray(int *ptr, int size);
int main(void) {
  int arr[] = {1, 3, 2, 4};
  puts("Func printLeftMostElementsInArray: ");
  printLeftMostElementsInArray(arr, 4);

  putchar('\n');

  puts("Func printRightMostElementsInArray: ");
  printRightMostElementsInArray(arr, 4);
  return 0;
}

void printLeftMostElementsInArray(int *ptr, int size) {
  if (size > 0) {
    printf("%d ", *ptr);
    printLeftMostElementsInArray(++ptr, size - 1);
  }
}

void printRightMostElementsInArray(int *ptr, int size) {
  if (size > 0) {
    printRightMostElementsInArray(ptr + 1, size - 1);
    printf("%d ", *ptr);
  }
}
