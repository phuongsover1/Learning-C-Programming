#include <stdio.h>
#include <stdlib.h>

int *createdArray(int size);
void printArray(int *arr, int size);
int main(void) {
  int size;
  printf("Enter size: ");
  scanf("%d", &size);
  int *arr = createdArray(size);
  if (arr != NULL) {
    printArray(arr, size);
    free(arr);
  } else {
    puts("Failed to allocate array\n");
  }
  return 0;
}

int *createdArray(int size) {
  int *returnedArray = (int *)malloc(sizeof(int) * size);
  if (returnedArray != NULL) {
    for (int i = 0; i < size; i++) {
      printf("Enter arr[%d] = ", i);
      scanf("%d", &returnedArray[i]);
    }
  }
  return returnedArray;
}

void printArray(int *arr, int size) {
  while (size > 0) {
    printf("%d ", *arr);
    arr++;
    size--;
  }
}
