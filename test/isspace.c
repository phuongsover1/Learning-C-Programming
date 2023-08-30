#include <ctype.h>
#include <stdio.h>

int main() {
  printf("isspace(' '): %d\n", isspace(' '));
  printf("isspace('\\t'): %d\n", isspace('\t'));
  printf("isspace('\\n'): %d\n", isspace('\n'));
  printf("isspace('a'): %d\n", isspace('a'));
  return 0;
}
