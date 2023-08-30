#include <math.h>
#include <stdio.h>

int main() {
  double y;
  float x;
  y = fabs(-40.3);

  x = fabsf(-40.3f);

  printf("y = %lf\n", y);
  printf("x = %f\n", x);
  printf("0.3 in float: %f\n", 0.3f);
  printf("0.3 in double: %lf", 0.3);

  return 0;
}
