#include <stdio.h>

// Receivies a year;
// Whether the year is a leap year or not

int main() {
  int year;
  printf("Enter year: ");
  scanf("%d", &year);

  if (year % 100 == 0) {
    printf("%d is not a leap year\n", year);
  }else if (year % 400 == 0 || year % 4 ===0) {
    printf("%d is a leap year\n");
  } 
  
  return 0;
}
