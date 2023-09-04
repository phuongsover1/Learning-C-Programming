#include <stdio.h>
#include <stdlib.h>

/*
 * Write a Recursive Function that:
 *   1. Receives a number - "num".
 *   2. Returns the SUM of all DIGITs
 */

int sumOfAllDigits(int n) {
  if (n < 10)
    return n;
  return n % 10 + sumOfAllDigits(n / 10);
}

int main() {
  int n;
  printf("Enter num: ");
  scanf("%d", &n);
  if (n < 0)
    n = abs(n);

  printf("Sum of all digits in %d is: %d\n", n, sumOfAllDigits(n));
  return 0;
}
