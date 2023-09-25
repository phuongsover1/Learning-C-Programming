#include <stdio.h>

int main(void) {
  short int a = 40000;

  printf("a = %d\n", a);
  printf("size of short int = %zu\n", sizeof(short int));
  printf("size of long int = %zu\n", sizeof(long int));
  return 0;
}
