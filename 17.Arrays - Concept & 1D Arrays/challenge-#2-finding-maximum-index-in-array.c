#include <stdio.h>
/*
 * Writee a prorgram that reads digits from user
 *  (representing your phone number)
 *  The Program should find the INDEX of the "maximum value digit" and print
 *  the index to the screen.
 */
int main() {
  int phoneNumber[10] = {0};
  int i, maxIndex, maxNumber;
  int c;

  i = 0;

  printf("Enter your phone number: ");

  while ((c = getchar()) != '\n') {
    if (i >= 10)
      break;
    phoneNumber[i++] = c - 48;
  }

  maxIndex = 0; 
  maxNumber = phoneNumber[0];

  for (i = 1; i < 10; i++) {
    if (phoneNumber[i] > maxNumber) {
      maxNumber = phoneNumber[i];
      maxIndex = i;
    }
  }

  printf("Index at max number in your phone number is: %d\n", maxIndex);


  return 0;
}
