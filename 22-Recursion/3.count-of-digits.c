#include <stdio.h>
#include <stdlib.h>

/*
 * Write a Recursive Function that:
 *   1. Receives a number - "num".
 *   2. Returns the TOTAL DIGITS in "num"
 */

int countDigits(int n) {
  if (n < 10)
    return 1;
  return 1 + countDigits(n / 10);
}
int main() {
  int n, count;

  printf("Enter n: ");
  scanf("%d", &n);
  if (n < 0)
    n = abs(n);

  printf("Total digits in %d is %d\n", n, countDigits(n));
  return 0;
}
