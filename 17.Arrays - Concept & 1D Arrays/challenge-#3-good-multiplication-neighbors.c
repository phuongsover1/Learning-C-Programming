#include <stdio.h>

// Work with neightbors!
//
// Write a program that creates an array of Integers.
// The program should check and print if the array has at least one element with
// "good neibors".
//    - An element with good neighbors has a value that euals to the
//    multiplication of both its neighbors (right, left).
//
//    Example #1 - [1,3,2,6,3] --> Array has "Good Neighbors"
//    Example #2 - [4,4,7,4,9] --> Array doesn't have "Good Neighbors"

#define SIZE 5
int main() {

  int array[SIZE];
  int hasGoodNeighbor = 0;

  for (int i = 0; i < SIZE; i++) {
    printf("Enter value for array[%d]: ", i);
    scanf("%d", &array[i]);
  }

  for (int i = 1; i + 1 < SIZE; i++) {
    if (array[i] == array[i - 1] * array[i + 1]) {
      hasGoodNeighbor = 1;
      break;
    }
  }

  if (hasGoodNeighbor)
    printf("Array has \"Good Neighbors\"\n");
  else
    printf("Array doesn't have \"Good Neighbors\"\n");

  return 0;
}
