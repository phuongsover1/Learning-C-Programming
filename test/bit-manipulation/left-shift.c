#include<stdio.h>

int main(void) {

  int a = 100;

  printf("a = %b\n", a);
  a = a << 12;

  printf("a = %b\n", a);
  return 0;
}
