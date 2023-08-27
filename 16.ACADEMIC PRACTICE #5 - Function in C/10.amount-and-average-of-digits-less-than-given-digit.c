#include <stdio.h>

// Write a function that gets some "num" (of an integer type), and a 'digit'
// The function should:
//    1. Print the Total amount of Digits In Num which are less than "digit"
//    2. Return Average of those Digits (that are less than "digit").
// Example #1: "num" = 13572, "digit" = 3 ==> Printf(2), Return 1.5;

float findAverageAndPrintTotalNumberLessThanGivenDigit(int number, int digit) {
  int count = 0;
  int sum = 0;
  int temp = number;
  if (number == 0)
    return 0;
  if (number < 0)
    number *= -1;
  while (number != 0) {
    if (number % 10 < digit) {
      sum = sum + (number % 10);
      ++count;
    }
    number /= 10;
  }
  printf("Total number in %d, which are less than %d is %d\n", temp, digit,
         count);

  return sum / (float)count;
}
int main() {
  int num, digit;

  printf("Enter number : ");
  scanf("%d", &num);

  printf("Enter digit: ");
  scanf("%d", &digit);

  printf("Average of numbers in %d which are less than %d is %.2f\n", num,
         digit, findAverageAndPrintTotalNumberLessThanGivenDigit(num, digit));

  return 0;
}
