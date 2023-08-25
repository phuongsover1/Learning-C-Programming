#include <stdio.h>

char toUpper(char letter) {
  if (letter >= 'a' && letter <= 'z')
    return letter - 32;
  else return -1;
}
int main() {
  char c;
  printf("Enter char: ");
  scanf("%c", &c);
  printf("Result = %c\n", toUpper(c));
  return 0;
}
