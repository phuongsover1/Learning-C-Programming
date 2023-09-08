#include <stdio.h>
// Structs Operators and Relations
// Usuage of "Relational Operators" (<. >, <=, >=, !=, ==)

typedef struct point {
  float x;
  float y;
} Point;

int equalPoints(Point p1, Point p2) {
  return p1.x == p2.x && p1.y == p2.y;
}

int main() {
  Point p1 = {1,2}, p2 = {1,2};
//
  printf("Result of equals: %d\n", equalPoints(p1, p2));
  if (equalPoints(p1, p2))
    puts("Equal");
  else 
    puts("Not equal");
    
  return 0;
}
