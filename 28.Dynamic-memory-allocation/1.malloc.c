#include <stdio.h>

int main(void) {
  double *bArr;
  int arraySize;
  printf("Enter size: ");
  scanf("%d", &arraySize);
  bArr = (double *)malloc(sizeof(double) * arraySize);
  return 0;
}
