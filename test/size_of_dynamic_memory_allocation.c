#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *arr = (int *)malloc(sizeof(int) * 10);
  printf("size: %zu\n", sizeof(arr));
  free(arr);
  return 0;
}