#include <stdio.h>

// Write a function that:
// 1. Receives a 2-digits number
// 2. Make sure it has 2 digits
// 3. Finds and prints maximum digit

void findMaximumDigitInTwoDigitsNumber(int twoDigitsNumber) {
  if (twoDigitsNumber < 10 || twoDigitsNumber > 99)
    printf("Error! Not 2-digits number. Please try again.\n");
  else {
    if (twoDigitsNumber / 10 > twoDigitsNumber % 10)
      printf("Maximum digit in %d is: %d\n",twoDigitsNumber,twoDigitsNumber / 10);
    else
      printf("Maximum digit in %d is:  %d\n", twoDigitsNumber, twoDigitsNumber % 10);
  };
}
int main() {
  int number;
  printf("Enter a 2-digits number: ");
  scanf("%d", &number);

  findMaximumDigitInTwoDigitsNumber(number);
  return 0;
}
