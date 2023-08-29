#include <stdio.h>

/*
 * Write a program that creates an Array (of integers).
 * The user is going too specify the values for the array.
 * Check if the array is "Really Sorted", "Sorted", "Not Sorted"
 *
 * + Really Sorted: every element starting from the left to the right is growing
 * + Sorted: element on the right is at least equal to the element on its left
 * or larger
 * + Not Sortedd: element on the right is less than the element on its left
 */

/*
 * Example #1: [1,2,5,7,10] --> Really Sorted.
 * Example #2: [1,2,2,5,10] --> Sorted.
 * Example #3: [1,2,5,3,10] --> Not Sorted.
 */

#define SIZE 100

int main() {
  int n, isReallySorted = 1, isSorted = 1;
  int arr[SIZE] = {0};

  do {
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    if (n < 1) 
      printf("The length is not valid!!\n");
  } while (n < 1);

  for (int i = 0; i < n; i++) {
    printf("Enter value for arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  for (int i = 1; i < n; i++) {
    if (arr[i] >= arr[i-1]) {
      if (arr[i] == arr[i-1]) {
        isReallySorted = 0;
      }
    } else {
      isReallySorted = 0;
      isSorted = 0;
      break;
    }
  }

  if (isReallySorted) 
    printf("The Array is Really Sorted!!!\n");
  else if (isSorted) 
    printf("The Array is Sorted!!!\n");
  else 
    printf("The Array is Not Sorted!!!\n");
  return 0;
}
