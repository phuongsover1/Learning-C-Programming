#include <stdio.h>
#include <stdlib.h>

// sn = (a1 + an) * n/2

int main() {
  float a1, an;
  int n;

  printf("Enter Initial Term (a1): ");
  scanf("%f", &a1);

  printf("Enter the Last Term (an) value: ");
  scanf("%f", &an);

  printf("Enter the Number of Elements in the Arithmetic Sequence: ");
  scanf("%d", &n);

  printf("The Sum of the Arithmetic Sequence = %.2f\n", (a1 + an) * n/2);
  return 0;
}
