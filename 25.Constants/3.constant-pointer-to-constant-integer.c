#include <stdio.h>

int main(void) {
  int age = 3;
  const int *const ptr = &age;

  *ptr = 2;

  int num1 = 5;

  ptr = &num1;

  return 0;
}
