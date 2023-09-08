#include <stdio.h>

struct point {
  int x;
  int y;
};
int main(void) {
  struct point p1 = {1,2};
  printf("Memory size occupied by p1: %zu\n", sizeof(p1));
  return 0;
}
