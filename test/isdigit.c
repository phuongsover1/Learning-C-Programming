#include <stdio.h>
#include <ctype.h>

int main() {
  printf("isdigit('a'): %d\n", isdigit('a'));
  printf("isdigit('0'): %d\n", isdigit('0'));
  printf("isdigit(1): %d\n", isdigit(1));
  printf("isdigit('A'): %d\n", isdigit('A'));
  return 0;
}
