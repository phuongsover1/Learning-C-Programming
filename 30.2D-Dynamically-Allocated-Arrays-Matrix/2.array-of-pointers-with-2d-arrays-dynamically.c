#include <stdio.h>
#include <stdlib.h>

void initColumnsDynamicallyEachRow2DArray(
    int **const ptr, const int numOfRows,
    int *const trackedNumOfColumnsEachRow);

void print2DIntArray(int **const ptr, const int numOfRows,
                     int *const trackedNumOfColumnsEachRow);

void **createRowsOf2DArrays(const int numOfRows, const int sizeOfEachRow);

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
    freeArray(trackedNumOfColumnsEachRow);
    exit(EXIT_FAILURE);
  }
  initColumnsDynamicallyEachRow2DArray(arr, numOfRows,
                                       trackedNumOfColumnsEachRow);
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
    if (ptr[i] == NULL) {
      // FIXME: Free arr, free trackNumOfColumnsEachRow
      printf("Error when calloc() columns for row %d in 2d array\n", i);
      free2DArray((void **)ptr, i + 1);
      freeArray((void *)trackedNumOfColumnsEachRow);
      exit(EXIT_FAILURE);
    }

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