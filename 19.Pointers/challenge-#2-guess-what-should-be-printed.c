#include <stdio.h>

int main() {
  int num1 = 5, num2 = 7;
  int *ptrA, *ptrB;

  // num1 = 5, num2 = 7
  printf("num1 = %d, num2 = %d \n", num1, num2);

  ptrA = &num1;
  ptrB = &num2;

  // num1 = 5, num2 = 7
  printf("num1 = %d, num2 = %d \n", num1, num2);

  *ptrA = *ptrA + 1;
  *ptrB = *ptrB + 3;

  // num1 = 6, num2 = 10
  printf("num1 = %d, num2 = %d \n", num1, num2);

  ptrA = ptrB;
  ptrB = ptrA;

  // num1 = 6, num2 = 10
  printf("num1 = %d, num2 = %d \n", num1, num2);
  // *ptrA = 10, *ptrB = 10
  printf("*ptrA = %d, *ptrB = %d\n", *ptrA, *ptrB);

  num1 = *ptrB;
  num2 = num1 - 3;

  // num1 = 10, num2 = 7
  printf("num1 = %d, num2 = %d\n", num1, num2);
  return 0;
}
