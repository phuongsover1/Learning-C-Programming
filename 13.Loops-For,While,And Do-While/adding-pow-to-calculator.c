#include <stdio.h>

int main() {
  int number, pow;
  long result = 1;
  printf("Enter number: ");
  scanf("%d", &number);

  printf("Enter pow: ");
  scanf("%d", &pow);


  while (pow > 0) {
    result *= number;
    pow--;
  }
  printf("Result = %ld\n", result);

  return 0;
}
