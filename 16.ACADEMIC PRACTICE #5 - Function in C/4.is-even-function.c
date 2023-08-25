#include <stdio.h>

// isEven (name of the function)
// This function will receive an integer
// Return "1" if this given number is "Even"
// Otherwise, this function shouuld return "0", "Odd" --> "0"

int isEven(int number) { return number % 2 == 0 ? 1 : 0; }

// isOdd
// This function will receive an integer.
// Return "1" if this given number is "Odd"
// otherwise, this function should return "0". "Even" -> "0"
int isOdd(int number) { return number % 2 != 0 ? 1 : 0; }

int main() {
  int number;
  do {
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number <= 0)
      printf("Number must be a positive number!\n");

  } while (number <= 0);

  printf("Number %d is %s number\n", number, isEven(number) ? "Even" : "Odd");

  return 0;
}
