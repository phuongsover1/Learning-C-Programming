#include <stdio.h>
#include <stdlib.h>

int main() {
  int number;

  printf("Enter number (whether Positive/Negative): ");
  scanf("%d", &number);

  if(number >= 0) 
    printf("The absolute value of %d is |%d|\n", number, number);
  else
    printf("The absolute value of %d is |%d|\n", number, (-1)*number);
  
  return 0;
}
