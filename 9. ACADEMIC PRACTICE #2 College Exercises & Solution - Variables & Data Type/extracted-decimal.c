#include <stdio.h>
// extracted decimal part of a value
// 17.23 -> 0.23;
int main() {
  float inputNumber;
  printf("Enter the data of floating point type: ");
  scanf("%f", &inputNumber);

  printf("The Integer Part = %d \n", (int)inputNumber);

  printf("The Decimal Part (after the floating point) = %.2f\n", inputNumber - (int)inputNumber);
  return 0;
}
