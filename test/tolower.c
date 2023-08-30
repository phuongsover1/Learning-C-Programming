#include <ctype.h>
#include <stdio.h>

int main() {
  char c, ch;
  c = getchar();
  ch = tolower(c);
  printf("ch = %c\n", ch);
  return 0;
}
