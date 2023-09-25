#include <stdio.h>

void waru2(int *b);

int main(void) {
  int i;
  int dt[] = {20, 10, 4, 35, 66, 78, -1};

  waru2(dt);

  for (i = 0; dt[i] != -1; i++) {
    printf("%d ", dt[i]);
  }
  putchar('\n');
  return 0;
}

void waru2(int *p) {
  while (*p != -1) {
    *p = *p / 2;
    p++;
  }
}
