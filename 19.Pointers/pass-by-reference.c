#include <stdio.h>

void findMinMax(int num1, int num2, int *pMax, int *pMin) {
  if (num1 > num2) {
    *pMax = num1;
    *pMin = num2;
  } else {
    *pMax = num2;
    *pMin = num1;
  }

}
int main() {
  int num1 = 5, num2 = 7;
  int max, min;
  printf("max before process findMinMax = %d\n", max);
  printf("min before process findMinmax = %d\n", min);
  findMinMax(num1, num2, &max, &min);
  printf("max after process findMinMax = %d\n", max);
  printf("min after process findMinmax = %d\n", min);
  printf("max = %d\n", max);
  printf("min = %d\n", min);

  return 0;
}
