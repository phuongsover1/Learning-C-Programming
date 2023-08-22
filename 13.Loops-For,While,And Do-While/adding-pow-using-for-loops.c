#include <stdio.h>

int main() {
  long result = 1;
  int number, pow;

  printf("Enter a number: ");
  scanf("%d", &number);

  printf("Enter pow: ");
  scanf("%d", &pow);

  for (int i = 0; i < pow; i++) {
    result *= number;
  }

  printf("result of %d^%d  = %ld\n", number, pow, result);

  return 0;
}
