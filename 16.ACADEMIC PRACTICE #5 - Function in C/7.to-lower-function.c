#include <stdio.h>

// Function Name --> toLower
// Receive a character
// if this character is a Upper Case Letter ('A', 'B', ... , 'Z')
//      return the lower case letter {'a','b',..,'z'}
// Otherwise, return -1

char toLower(char letter) {
  if (letter >= 'A' && letter <='Z')
    return letter + 32;
  else 
    return -1;
}
int main() {

  char c;
  printf("Enter char: ");
  scanf("%c", &c);
  printf("Result = %c\n", toLower(c));

  return 0;
}
