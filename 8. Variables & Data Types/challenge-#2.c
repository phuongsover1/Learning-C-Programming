#include <stdio.h>

int main() {
  double width, height;
  printf("Rectangle Height: ");
  scanf("%lf", &height);
  printf("Rectangle Width: ");
  scanf("%lf", &width);
  printf("Rectangle's Area: %lf", height * width);
  return 0;
}
