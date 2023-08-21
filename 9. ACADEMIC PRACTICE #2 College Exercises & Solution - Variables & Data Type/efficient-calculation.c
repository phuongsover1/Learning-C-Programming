#include <stdio.h>

// X
// X^2 = X*X
// X^4 = X*X*X*X
// X^6 = X*X*X*X*X*X
// x^8 = X*X*X*X*X*X*X*X

int main() {

  int x;
  long x2, x4, x6, x8;

  printf("Enter X: ");
  scanf("%d", &x);

  x2 = x*x;
  x4 = x2*x2;
  x6 = x4*x2;
  x8 = x4*x4;

  printf("X^2: %ld\nX^4: %ld\nX^6: %ld\nX^8: %ld\n", x2,x4,x6,x8);
  return 0;
}
