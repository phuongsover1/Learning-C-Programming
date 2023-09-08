#include <stdio.h>

int main() {
  char *pointerArr[3] = {"January", "February", "March"};
  char **p1, **p2, **p3;

  p1 = p2 = p3 = pointerArr;

  puts("P1: ");
  for (int i = 0; i < 3; i++) {
    printf("%s\n", *(p1 + i));
  }

  puts("P2: ");
  for (int i = 0; i < 3; i++) {
    printf("%s\n", *p2);
    p2++;
  }

  puts("P3: ");
  int j;
  for (int i = 0; i < 3; i++) {
    j = 0;
    while (*(*p3 + j) != '\0') {
      putchar(*(*p3 + j));
      j++;
    }
    printf("\n");
    p3++;
  }

  return 0;
}
