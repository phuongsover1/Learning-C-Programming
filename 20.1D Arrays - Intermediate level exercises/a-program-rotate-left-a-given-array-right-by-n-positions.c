#include <ctype.h>
#include <stdio.h>

#define SIZE 100

void rotateAnArrayRightByOnePosition(int *array, int arrLength) {
  int temp = array[arrLength - 1];
  for (int i = arrLength - 2; i >= 0; i--)
    array[i + 1] = array[i];
  array[0] = temp;
}

void printArray(int *array, int arrLength) {
  printf("Print Array: \n");
  for (int i = 0; i < arrLength; i++) {
    printf("arr[%d] = %d\n", i, array[i]);
  }
}

int main() {
  int arr[SIZE];
  int arrLength = 0, nPosition;

  do {
    printf("Enter the length of the array: ");
    scanf("%d", &arrLength);
    if (arrLength < 1)
      printf("The length is not valid!!\n");
  } while (arrLength < 1);

  do {
    printf("Enter number of position, that you want to rorate by ? (n < %d): ",
           arrLength);
    scanf("%d", &nPosition);
  } while (nPosition < 1 || nPosition >= arrLength);

  for (int i = 0; i < arrLength; i++) {
    printf("Enter value for arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < nPosition; i++)
    rotateAnArrayRightByOnePosition(arr, arrLength);

  printArray(arr, arrLength);

  return 0;
}
