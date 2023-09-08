#include <stdio.h>

// Lesson: Static Array of Structs
typedef struct point {
  int x;
  int y;
} Point;

int main() {
  // Creating a "static Array of Points"
  Point pointArray[5];
  int i;

  // Reading input to the first point element in the array
  printf("Enter a first point 'x' coordinate: ");
  scanf("%d", &pointArray[0].x);
  printf("Enter a first point 'y' coordinate: ");
  scanf("%d", &pointArray[0].y);
  return 0;
}
