#include <stdio.h>
#include <math.h>
// (x1, y1), (x2, y2)
// Distance = sqrt((x1 - x2)^2 + (y1-y2)^2)
int main() {
  float x1, y1, x2, y2;

  printf("Enter X1: ");
  scanf("%f", &x1);

  printf("Enter Y1: ");
  scanf("%f", &y1) ;

  printf("Enter X2: ");
  scanf("%f", &x2);

  printf("Enter Y2: ");
  scanf("%f", &y2);

  float distance = sqrt((x1 - x2) * (x1-x2) + (y1 - y2) * (y1-y2));

  printf("The distance between (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n", x1,y1,x2,y2, distance);
  return 0;
}
