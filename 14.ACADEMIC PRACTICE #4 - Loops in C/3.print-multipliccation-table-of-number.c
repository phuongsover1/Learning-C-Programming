#include <stdio.h>

int main() {
  int number, multiplicator;
  do {
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number <= 0)
      printf("Number must be an positive!!\n");
  } while (number < 0);

  do {
    printf("Enter multiplicator: ");
    scanf("%d", &multiplicator);
    if (multiplicator <= 0) 
      printf("Multiplicator must be an positive!!\n");
  } while (multiplicator <= 0);

  for (int i = 1; i <= multiplicator; i++) {
    printf("%d * %d = %d\n", number, i , number * i);
  }
  return 0;
}
