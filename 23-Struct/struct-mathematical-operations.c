#include <stdio.h>

typedef struct point {
  int x;
  int y;
} Point;

Point addition(Point p1, Point p2) { // '+'
  Point result;
  result.x = p1.x + p2.x;
  result.y = p1.y + p2.y;
  return result;
}

void increment(Point *p1) {
  p1->x++;
  p1->y++;
}

void printPoint(Point point) {
  printf("X = %d, Y = %d\n", point.x, point.y);
}

int main() {
  Point p1 = {1, 2}, p2 = {4, 1};
  increment(&p1);
  puts("P1: ");
  printPoint(p1);
  Point p3 = addition(p1, p2);
  puts("P3:");

  printPoint(p3);

  return 0;
}
