#include <stdio.h>

int min1(int n);
int min2(int n);;

int main(void) {
  printf("min1(100): %d\n", min1(100));
  printf("min1(10): %d\n", min1(10));
  printf("min1(50): %d\n", min1(50));

  printf("min2(100): %d\n", min2(100));
  printf("min2(10): %d\n", min2(10));
  printf("min2(50): %d\n", min2(50));
  return 0;
}

int min1(int n) {
  int min = 999;
  if (n < min) 
    min = n;
  return min;
}

int min2(int n) {
  static int min = 999;
  printf("static min variable = %d\n", min);
  if (n < min)
    min = n;
  return min;
}
