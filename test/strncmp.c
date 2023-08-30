#include <stdio.h>
#include <string.h>

int main() {
  char a[] = "aaabbbccd";
  char b[] = "aaabbbccee";

  printf("strncmp(a,b,10): %d\n", strncmp(a,b,10));
  return 0;
}
