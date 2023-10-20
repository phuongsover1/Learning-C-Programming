#include <stdio.h>
#include <stdlib.h>

void printIntArray(int *arr, unsigned int size);
void *insertElementToArr(void *arr, unsigned int *size, void *newElement,
                         unsigned int sizeOfNewElement,
                         unsigned int indexToInsert);

int *createArray(unsigned int size);
void initArray(int *arr, unsigned int size);

void freeMemory(void **ptr);

int main(void) {
  unsigned int arrSize;
  int *arr = NULL;

  printf("Enter the size of the array: ");
  scanf("%d", &arrSize);

  arr = createArray(arrSize);
  initArray(arr, arrSize);

  puts("Before: ");
  printIntArray(arr, arrSize);

  int newElement, index;
  printf("Enter new element: ");
  scanf("%d", &newElement);
  printf("Enter the index, in that you want to insert: ");
  scanf("%d", &index);
  arr = (int *)insertElementToArr(arr, &arrSize, &newElement,
                                  sizeof(newElement), index);

  puts("Before: ");
  printIntArray(arr, arrSize);

  freeMemory(&arr);
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

void *insertElementToArr(void *arr, unsigned int *size, void *newElement,
                         unsigned int sizeOfNewElement,
                         unsigned int indexToInsert) {
  if (indexToInsert > *size) {
    puts("indexToInsert larger than actual size");
    return NULL;
  }
  int oldSize = *size;

  // Increase the size
  *size = oldSize + 1;

  char *temp =
      (char *)realloc(arr, oldSize * sizeOfNewElement + sizeOfNewElement);
  if (temp == NULL) {
    puts("Failed to realloc()");
    exit(EXIT_FAILURE);
  }

  // if insert new element to the last position of arr
  int i, j;
  if (indexToInsert == oldSize) {
    for (i = 0; i < sizeOfNewElement; i++) {
      temp[oldSize * sizeOfNewElement + i] = ((char *)newElement)[i];
    }
  } else { // index < oldSize
    // tìm ra vị trí byte bắt đầu add , trước khi add thì dời tất cả byte ở phía
    // sau nữa
    // Muốn dời được các byte ở phía sau, thì đầu tiền mình cần phải biết được
    // số lượng phần tử đã = (oldSize - index), số byte của từng phần tử =
    // sizeof(newElement) bắt đầu dịch byte từ phải về

    unsigned int totalShiftElements = oldSize - indexToInsert;
    unsigned int totalBytesShift = totalShiftElements * sizeOfNewElement;
    unsigned int startByteLocationAtTheInsertedNewElement =
        indexToInsert * sizeOfNewElement;

    printf("start byte: %d", startByteLocationAtTheInsertedNewElement);
    // điều kiện dừng là shift hết số phần tử = totalShiftElements
    // Note: *size = new size of the array
    int count;
    int k;
    for (k = 1; k <= totalShiftElements; k++) {
      for (i = (*size - k) * sizeOfNewElement,
          j = (oldSize - k) * sizeOfNewElement, count = 0;
           count < sizeOfNewElement; i++, j++, count++) {
        temp[i] = temp[j];
      }
    }
    // // Insert new element to the arrayV
    for (i = 0; i < sizeOfNewElement; i++) {
      temp[startByteLocationAtTheInsertedNewElement + i] =
          ((char *)newElement)[i];
    }
  }
  return temp;
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