#include <ctype.h>
#include <stdio.h>

int main() {
  printf("1. isalnum('a'): %d\n", isalnum('a'));
  printf("2. isalnum(1): %d\n", isalnum(1));
  printf("3. isalnum('1'): %d\n", isalnum('1'));
  printf("4. isalnum('A'): %d\n", isalnum('A'));
  printf("5. isalnum('$'): %d\n", isalnum('$'));
  return 0;
}
