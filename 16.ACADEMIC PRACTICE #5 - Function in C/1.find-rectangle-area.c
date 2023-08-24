#include <stdio.h>

// Calculate the area of a Rectangle
// 1. Receives "Height" and "Width"
// 2. Calculate and return the AREA

float calculateRectangleArea(float width, float height) {
  return width * height;
}

int main() {

  float w, h;

  do {
    printf("Enter width: ");
    scanf("%f", &w);
    if (w <= 0)
      printf("Width is not valid!!\n");
  }while (w <= 0);

  do {
    printf("Enter height: ");
    scanf("%f", &h);
    if (h <= 0)
      printf("Height is not valid!!\n");
  }while(h <= 0);

  printf("Rectangle Area = %.2f\n", calculateRectangleArea(w, h));

  return 0;
}
