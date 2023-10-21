#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printIntArray(int *arr, unsigned int size);
int *createArray(unsigned int size);
void initArray(int *arr, unsigned int size);

void freeMemory(void **ptr);
void *insertElementToArray(void *arr, unsigned int *size, void *newElement,
                           unsigned int elementSize, unsigned int index);
int main(void) {
  unsigned int arrSize;
  int *arr = NULL;
  int newElement;
  unsigned int index;

  printf("Enter the size of arr: ");
  scanf("%d", &arrSize);
  arr = createArray(arrSize);
  initArray(arr, arrSize);
  printIntArray(arr, arrSize);

  printf("Enter value for new element: ");
  scanf("%d", &newElement);
  printf("Enter the index, in that you want to insert: ");
  scanf("%d", &index);

  arr = insertElementToArray(arr, &arrSize, &newElement, sizeof(int), index);

  printIntArray(arr, arrSize);
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
void *insertElementToArray(void *arr, unsigned int *size, void *newElement,
                           unsigned int elementSize, unsigned int index) {
  if (arr == NULL)
    return NULL;
  if (index > *size) {
    puts("index is larger than size");
    return arr;
  }
  unsigned int oldSize = *size;
  void *temp = realloc(arr, (oldSize + 1) * elementSize);
  if (temp == NULL) {
    puts("Failed to reallocate memory using realloc()");
    return arr;
  }
  // Successfully realloc()
  *size = oldSize + 1;

  unsigned int startByteLocationToInsertNewElement = index * elementSize;
  unsigned int totalShiftElements = oldSize - index;
  // 1.Giờ ta phải copy mem từ startByteLocationToInsertNewElement đến cuối vị
  // trí byte của element cuối cùng của mảng (dừng lại ở cuối oldSize) 2.vị trí
  // bắt đầu được copy mới là từ startByteLocationToInsertNewElement +
  // elementSize
  memcpy(temp + (startByteLocationToInsertNewElement + elementSize),
         temp + startByteLocationToInsertNewElement,
         totalShiftElements * elementSize);

  // insert new element to array
  memcpy(temp + startByteLocationToInsertNewElement, newElement, elementSize);
  return temp;
}