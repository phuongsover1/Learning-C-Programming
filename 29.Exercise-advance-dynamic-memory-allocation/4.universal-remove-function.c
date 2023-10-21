#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printIntArray(int *arr, unsigned int size);
int *createArray(unsigned int size);
void initArray(int *arr, unsigned int size);
void freeMemory(void **ptr);
void *removeElement(void *arr, int *size, int index, int sizeOfRemoveElement);

int main(void) {
  int size;
  int *arr = NULL;
  printf("Enter the size of array: ");
  scanf("%d", &size);
  arr = createArray(size);
  initArray(arr, size);

  puts("Before: ");
  printIntArray(arr, size);

  int position;
  printf("Enter the position,in that you want to remove value: ");
  scanf("%d", &position);
  removeElement(arr, &size, position - 1, sizeof(position));

  puts("After: ");
  printIntArray(arr, size);

  freeMemory((void **)&arr);
  return 0;
}

void printIntArray(int *arr, unsigned int size) {
  while (size > 0) {
    printf("%d ", *arr);
    arr++;
    size--;
  }
  printf("\n");
}
int *createArray(unsigned int size) {
  return (int *)malloc(sizeof(int) * size);
}

void initArray(int *arr, unsigned int size) {
  if (arr != NULL) {
    int i;
    for (i = 0; i < size; i++) {
      printf("Enter value for arr[%d] = ", i);
      scanf("%d", &arr[i]);
    }
  }
}
void freeMemory(void **ptr) {
  free(*ptr);
  *ptr = NULL;
}

void *removeElement(void *arr, int *size, int index, int sizeOfRemoveElement) {
  if (!arr) {
    puts("Arr is null");
    return arr;
  }
  if (index > *size) {
    puts("Index is larger than size.");
    return arr;
  }
  memcpy(arr + (index * sizeOfRemoveElement),
         arr + ((index + 1) * sizeOfRemoveElement),
         sizeOfRemoveElement * (*size - index - 1));

  void *temp = realloc(arr, (*size - 1) * sizeOfRemoveElement);
  if (!temp) {
    puts("realloc() error!");
    freeMemory((void **)&arr);
    exit(EXIT_FAILURE);
  }
  arr = temp;
  *size -= 1;
  return arr;
}