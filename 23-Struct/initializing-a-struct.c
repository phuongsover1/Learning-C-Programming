#include <stdio.h>
typedef struct point {
  int x;
  int y;
} Point;

void printPoint(Point point) {
  printf("X = %d, Y = %d\n", point.x, point.y);
}
int main() {
  Point p0;
  puts("P0:");
  printPoint(p0);

  Point p1 = {5,6};
  puts("P1:");
  printPoint(p1);
  Point p2 = {.x = 3, .y = 4};
  puts("P2:");
  printPoint(p2);
  Point p3 = {.y = 4, .x = 3};
  puts("P3");
  printPoint(p3);

  Point p4 = {.x = 3};
  puts("P4");
  printPoint(p4);
  return 0;
}
