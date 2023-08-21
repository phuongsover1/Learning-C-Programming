#include <stdio.h>

// if a given numberr is "double-digit" / "triple-digits"/ neither ..."
int main() {
  int number;

  printf("Enter number (double or triple digits): ");
  scanf("%d", &number);

  if (number / 1000 > 0)
    printf("neither double/triple\n");
  else if (number / 10 == 0)
    printf("neither double/triple\n");
  else if (number / 100 > 0)
     printf("Triple digits\n");
  else
    printf("Double digits\n");

  return 0;
}
