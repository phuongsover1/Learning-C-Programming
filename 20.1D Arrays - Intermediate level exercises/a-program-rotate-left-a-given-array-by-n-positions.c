#include <ctype.h>
#include <stdio.h>

#define SIZE 100

void rotateAnArrayByOnePosition(int *array, int arrLength) {
  int temp = array[0];
  for (int i = 1; i < arrLength; i++)
    array[i - 1] = array[i];
  array[arrLength - 1] = temp;
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
    rotateAnArrayByOnePosition(arr, arrLength);

  printArray(arr, arrLength);

  return 0;
}
