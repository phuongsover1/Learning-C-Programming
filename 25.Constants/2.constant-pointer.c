#include <stdio.h>

// Constant pointer to variable  
//  + Value which is pointed can be change
//  + Pointer itself can't be change
int main(void) {
  int num1 = 3;

  // int *const ptr;

  // ptr = &num1; // error

  int *const ptr = &num1;

  *ptr = 2;
  printf("Value after change: %d\n", *ptr);
  

  return 0;
}
