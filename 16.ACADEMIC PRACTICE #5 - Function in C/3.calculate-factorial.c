#include <stdio.h>

// Write a function that:
// 1. Receives a number.
// 2. Calculattes its Factorial.
// 3. Returns the result.
// Factorial(num) = 1 * 2 * 3 *... * n;
//
// EX #1: Factorial(3) = 1 * 2 * 3 = 6;
// EX #2: Factoriale(5)  1 * 2 * 3 * 4 * 5 = 120

int findFactorial(int number) {
  if (number <= 0)
    return -1;
  else if (number == 1)
    return 1;
  else
    return (number - 1) * findFactorial(number - 1);
}
int main() {
  int num;
  printf("Enter num (to calculate it's factorial): ");
  scanf("%d", &num);
  printf("Factorial of %d is %d\n", num, findFactorial(num));
  return 0;
}
