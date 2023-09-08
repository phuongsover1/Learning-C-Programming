#include <stdio.h>

// Composing Struct inside Another Struct

typedef struct point {
  int x;
  int y;
} Point;

typedef struct circle {
  Point center;
  float radius;
} Circle;

void printPoint(Point *p) { printf("(X, Y) = (%d, %d)\n", p->x, p->y); }
void printCircle(Circle *c) {
  printf("Center Point: ");
  printPoint(&(c->center));
  printf("Radius: %.1f\n", c->radius);
}
int main(void) {
  Point p1 = {1, 2};
  Circle c1;
  c1.center = p1;
  c1.radius = 3.2;
  printCircle(&c1);


  return 0;
}
