#include <stdio.h>
#include <stdlib.h>

void initColumnsDynamicallyEachRow2DArray(
    int **const ptr, const int numOfRows,
    int *const trackedNumOfColumnsEachRow);

void print2DIntArray(int **const ptr, const int numOfRows,
                     int *const trackedNumOfColumnsEachRow);

void **createRowsOf2DArrays(const int numOfRows, const int sizeOfEachRow);

void swapTwoRowsIn2DArray(void **arr, const int row1, const int row2,
                          int *const trackedNumOfColumnsEachRow);

void free2DArray(void **ptr, const int numOfRows);

void freeArray(void **ptr);

int main(void) {
  int **arr = NULL;
  int numOfRows;
  int *trackedNumOfColumnsEachRow = NULL;

  printf("Enter number of rows: ");
  scanf("%d", &numOfRows);

  trackedNumOfColumnsEachRow = (int *)calloc(numOfRows, sizeof(int));
  arr = (int **)createRowsOf2DArrays(numOfRows, sizeof(int *));
  if (arr == NULL) {
    freeArray((void *)trackedNumOfColumnsEachRow);
    exit(EXIT_FAILURE);
  }
  initColumnsDynamicallyEachRow2DArray(arr, numOfRows,
                                       trackedNumOfColumnsEachRow);
  print2DIntArray(arr, numOfRows, trackedNumOfColumnsEachRow);

  int row1, row2;
  printf("Enter two rows, that you want to swap (row1 row2): ");
  scanf("%d %d", &row1, &row2);

  while (row1 < 0 || row1 > numOfRows) {
    printf("Row1 must larger than 0, and less or equal than %d\n", numOfRows);
    printf("Enter row1: ");
    scanf("%d", &row1);
  }
  while (row2 < 0 || row2 > numOfRows) {
    printf("Row2 must larger than 0, and less or equal than %d\n", numOfRows);
    printf("Enter row2: ");
    scanf("%d", &row2);
  }

  swapTwoRowsIn2DArray((void **)arr, row1 - 1, row2 - 1,
                       trackedNumOfColumnsEachRow);

  puts("After:");
  print2DIntArray(arr, numOfRows, trackedNumOfColumnsEachRow);

  free2DArray((void **)arr, numOfRows);
  freeArray((void **)&trackedNumOfColumnsEachRow);
  return EXIT_SUCCESS;
}

void initColumnsDynamicallyEachRow2DArray(
    int **const ptr, const int numOfRows,
    int *const trackedNumOfColumnsEachRow) {
  int i, numOfCols, j;
  for (i = 0; i < numOfRows; i++) {
    printf("Enter number of columns that you want to allocate for row %d: ",
           i + 1);
    scanf("%d", &numOfCols);
    trackedNumOfColumnsEachRow[i] = numOfCols;
    ptr[i] = (int *)calloc(numOfCols, sizeof(int));
    for (j = 0; j < numOfCols; j++) {
      printf("Enter value for arr[%d][%d] = ", i, j);
      scanf("%d", &ptr[i][j]);
    }
  }
}

void print2DIntArray(int **const ptr, const int numOfRows,
                     int *const trackedNumOfColumnsEachRow) {
  int i, j;
  for (i = 0; i < numOfRows; i++) {
    for (j = 0; j < trackedNumOfColumnsEachRow[i]; j++) {
      printf("arr[%d][%d] = %d\n", i, j, ptr[i][j]);
    }
  }
}

void **createRowsOf2DArrays(const int numOfRows, const int sizeOfEachRow) {
  return (void **)calloc(numOfRows, sizeOfEachRow);
}

void swapTwoRowsIn2DArray(void **arr, const int row1, const int row2,
                          int *const trackedNumOfColumnsEachRow) {
  void *temp = arr[row1];
  arr[row1] = arr[row2];
  arr[row2] = temp;

  int tempSize = trackedNumOfColumnsEachRow[row1];
  trackedNumOfColumnsEachRow[row1] = trackedNumOfColumnsEachRow[row2];
  trackedNumOfColumnsEachRow[row2] = tempSize;
}
void free2DArray(void **ptr, const int numOfRows) {
  int i;
  for (i = 0; i < numOfRows; i++) {
    free(ptr[i]);
    ptr[i] = NULL;
  }
  free(ptr);
}

void freeArray(void **ptr) {
  free(*ptr);
  *ptr = NULL;
}