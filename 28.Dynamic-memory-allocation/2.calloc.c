#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size);
int main(void)
{
  int *a;
  int arraySize;
  printf("Enter size: ");
  scanf("%d", &arraySize);
  a = (int *)calloc(arraySize, sizeof(int));
  printArray(a, arraySize);

  return 0;
}
void printArray(int *arr, int size) {
  while (size > 0) {
    printf("%d ", *arr);
    arr++;
    size--;
  }
}