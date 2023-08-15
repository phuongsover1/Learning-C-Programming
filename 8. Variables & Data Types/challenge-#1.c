#include <stdio.h>

int main() {
  int currentYear, yourAge;
  printf("Current Year: ");
  scanf("%d", &currentYear);
  printf("Your Age: ");
  scanf("%d", &yourAge);
  printf("Year you were born: %d", currentYear - yourAge);
  return 0;
}
