#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double *bArr;
  int arraySize;
  printf("Enter size: ");
  scanf("%d", &arraySize);
  bArr = (double *)malloc(sizeof(double) * arraySize);
  if (bArr != NULL) {
    puts("Allocation Succeded!");
    free(bArr);
  }
  else 
    puts("Allocation failed");
  return 0;
}
