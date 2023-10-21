#include <stdio.h>
#include <stdlib.h>

void initColumnsDynamicallyEachRow2DArray(
    int **const ptr, const int numOfRows,
    int *const trackedNumOfColumnsEachRow);

void print2DIntArray(int **const ptr, const int numOfRows,
                     int *const trackedNumOfColumnsEachRow);
void free2DArray(void **ptr, const int numOfRows);
int main(void) {
  int *const matrix[5];
  int numOfRows = 5;
  int trackedNumOfColumnsEachRow[5] = {0};

  initColumnsDynamicallyEachRow2DArray(matrix, numOfRows,
                                       trackedNumOfColumnsEachRow);

  print2DIntArray(matrix, numOfRows, trackedNumOfColumnsEachRow);
  free2DArray((void **)matrix, numOfRows);
  return EXIT_SUCCESS;
}

void initColumnsDynamicallyEachRow2DArray(
    int **const ptr, const int numOfRows,
    int *const trackedNumOfColumnsEachRow) {
  int i, numOfCols;
  for (i = 0; i < numOfRows; i++) {
    printf("Enter number of columns that you want to allocate for row %d: ",
           i + 1);
    scanf("%d", &numOfCols);
    trackedNumOfColumnsEachRow[i] = numOfCols;
    ptr[i] = (int *)calloc(numOfCols, sizeof(int));
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

void free2DArray(void **ptr, const int numOfRows) {
  int i;
  for (i = 0; i < numOfRows; i++) {
    free(ptr[i]);
  }
}