#include <stdio.h>

/*
 * Exercise: Write 2 functions:
 *   - Function #1 - gets a point variable and prints its information
 *   - Function #2 - responsible for getting a point input from the user
 *                   and then return it
 */
typedef struct point {
  float x;
  float y;
} Point;

// Function #1
void printPoint(Point point) {
  printf("(X,Y) = (%.1f, %.1f)\n", point.x, point.y);
}
// Function #2
Point getPoint() {
  float x, y;
  puts("Enter Point's informnation: ");
  printf("X = ");
  scanf("%f", &x);
  printf("y = ");
  scanf("%f", &y);
  Point point = {.x = x, .y = y};
  return point;
}

int main() {
  Point myPoint = getPoint();
  printPoint(myPoint);

  return 0;
}
