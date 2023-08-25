#include <stdio.h>

// TASK:
// Function that receives 3 characters
// If all the characters are of a digit type ('0' -> '9')
//    return: an integer which is a decimal representation of this 3 digits number
//    Otherwhise, return 0
//
//  Example:
//      '1', '5', '9'
//        RETURN 159
//      '2', '0', '6'
//        RETURN 206

int charsTo3DigitsIntegerNumber(char char1, char char2, char char3) {
  if (char1 >= '0' && char1 <= '9' && char2 >= '0' && char2 <= '9' && char3 >= '0' && char3 <= '9') {
    return (char1 - 48) * 100 + (char2 - 48) * 10 + (char3 - 48);
  }else
    return 0;
}

int main() {
  char char1, char2, char3;
  printf("Enter first character: ");
  scanf("%c", &char1);

  printf("Enter second character: ");
  scanf("%*c%c", &char2);

  printf("Enter third character: ");
  scanf("%*c%c", &char3);

  int result = charsTo3DigitsIntegerNumber(char1, char2, char3);
  if (result) 
    printf("3-digits number of %c, %c, %c is %d \n", char1, char2, char3, result);
  else 
    printf("Please enter exact 3 digits\n");

  return 0;
}
