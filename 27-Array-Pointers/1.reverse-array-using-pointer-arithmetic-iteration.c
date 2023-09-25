#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

void inputArray(int *arrPtr, int size) {
  int i;
  int arr[SIZE] = {0};
  for (i = 0; i < size; i++) {
    printf("Enter value for arr[%d] = ", i);
    scanf("%d", &arrPtr[i]);
  }
}
void printArr(int *arrPtr, int size) {
  int i;
  for (i = 0; i < size; i++)
    printf("%d ", arrPtr[i]);
}

void genericSwap(void *a, void *b, unsigned int size) {
  void *tempSwapMemory = malloc(size);

  memcpy(tempSwapMemory, a, size);
  memcpy(a, b, size);
  memcpy(b, tempSwapMemory, size);

  free(tempSwapMemory);
}

void reverseStrIterationUsingPointerArithmetic(char *ptrArr, int size) {
  int i;
  for (i = 0; i < size / 2; i++) {
    genericSwap(ptrArr + i, ptrArr + size - 1 - i, sizeof(char));
  }
}

int main(void) {

  char charArr[SIZE];
  printf("Enter string: ");
  scanf("%s", charArr);


  puts("Before: ");
  printf("%s\n", charArr);

  reverseStrIterationUsingPointerArithmetic(charArr, strlen(charArr));

  puts("After : ");
  printf("%s\n", charArr);
  return 0;
}
