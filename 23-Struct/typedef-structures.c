#include <stdio.h>

typedef int GRADE;
typedef struct point {
  int x;
  int y;
} Point;

int main() {

  GRADE math;
  GRADE physics;
  printf("Enter math grade: ");
  scanf("%d", &math);
  printf("Enter physics grade: ");
  scanf("%d", &physics);

  printf("Math's grade: %d\nPhysics's grade: %d\n", math, physics);

  Point point1;
  printf("Enter X: ");
  scanf("%d", &point1.x);
  printf("Enter Y: ");
  scanf("%d", &point1.y);

  printf("point1(X,Y) = (%d,%d)\n ", point1.x, point1.y);
  return 0;
}
