#include <stdio.h>
#include <string.h>

int main() {
  char a[10] = "some";
  char b[10] = "day";

  strcat(a, b);
  printf("strcat(a,b); a -> %s\n", a);
  printf("strcat(a,b); b -> %s\n", b);
  return 0;
}
