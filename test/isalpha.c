#include <stdio.h>
#include <ctype.h>

int main() {
  printf("isalpha('a'): %d\n", isalpha('a'));
  printf("isalpha('0'): %d\n", isalpha('0'));
  printf("isalpha(1): %d\n", isalpha(1));
  printf("isalpha('A'): %d\n", isalpha('A'));
  return 0;
}
