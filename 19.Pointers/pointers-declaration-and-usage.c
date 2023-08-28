#include <stdio.h>

int main() {
  int a = 5;

  int *p;

  printf("%d\n", a);

  printf("%p\n", &a);
  
  printf("%#x\n", &a);

  printf("Pointer Usage:\n");

  a = 5;
  p = &a;

  printf("%p\n", &a);
  printf("%p\n", p);
  printf("%p\n", &p);
  printf("%d\n", *p);

  return 0;
}
