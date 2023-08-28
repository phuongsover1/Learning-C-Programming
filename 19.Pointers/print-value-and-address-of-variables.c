#include <stdio.h>

int  main() {
  int grade1, grade2 ;
  grade1 = 8, grade2 = 9;

  printf("Value of grade1 variable: %d\n", grade1);
  printf("Value of grade1 variable's address: %p\n", &grade1);

  printf("Value of grade2 variable: %d\n", grade2);
  printf("Value of grade2 variable's address: %p\n", &grade2);
  return 0;
}
