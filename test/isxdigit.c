#include <ctype.h>
#include <stdio.h>

int main() {
  printf("%d\n", isxdigit('A'));
  printf("%d\n", isxdigit('a'));
  printf("%d\n", isxdigit('x'));
  return 0;
}
