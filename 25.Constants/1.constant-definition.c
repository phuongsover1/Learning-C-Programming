#include <stdio.h>

int main(void) {
  // Demo pointer to a constant !
  int age = 3;
  const int *ptr;
  ptr = &age;


  int age1 = 4;
  ptr = &age1;


  return 0;
}
