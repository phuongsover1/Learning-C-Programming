#include <stdio.h>

#define SIZE 5

int *createArray();

void printArray(int *arrPtr, int size);
int main(void) {
  int *arrPtr = createArray();
  printf("arrPtr: \n");
  printArray(arrPtr, SIZE);

  int *arrPtr1 = createArray();
  printf("arrPtr1: \n");
  printArray(arrPtr1, SIZE);
  printf("arrPtr: \n");
  printArray(arrPtr, SIZE);
  return 0;
}

int *createArray() {
  int i;
  static int arr[SIZE];
  for (i = 0; i < SIZE; i++) {
    printf("Enter value for arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }
  return arr;
}

void printArray(int *arrPtr, int size) {
  int i;
  for (i =0; i < size; i++) {
    printf("%d ", arrPtr[i]);
  }
  putchar('\n');
}
