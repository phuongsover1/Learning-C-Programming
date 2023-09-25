#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

void inputArray(int *arrPtr, int size) {
  int i;
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

void reverseStrRecursionUsingPointerArithmetic(char *currentElement,
                                               int currentSize) {
  if (currentSize < 2)
    return;
  genericSwap(currentElement, currentElement + currentSize - 1,
              sizeof(*currentElement));
  currentElement++;
  currentSize -= 2;
  reverseStrRecursionUsingPointerArithmetic(currentElement, currentSize);
}

int main(void) {

  char charArr[SIZE];
  printf("Enter string: ");
  scanf("%s", charArr);

  puts("Before: ");
  printf("%s\n", charArr);

  reverseStrRecursionUsingPointerArithmetic(charArr, strlen(charArr));

  puts("After : ");
  printf("%s\n", charArr);
  return 0;
}
