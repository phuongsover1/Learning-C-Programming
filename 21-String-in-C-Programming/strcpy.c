#include <stdio.h>
#include <string.h>

int main () {
  char str1[10] = "Hell\0o";

  printf("str1 before: %s\n", str1);
  char *newStr;
  newStr = strcpy(str1, "Ph\0uong");
  printf("str1 after: %s\n", str1);
  printf("newStr: %s\n", newStr);
  return 0;
}
