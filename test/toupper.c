#include <ctype.h>
#include <stdio.h>

int main() {
  char c, ch;
  c = getchar();
  ch = toupper(c);
  printf("ch = %c\n", ch);
  return 0;
}
