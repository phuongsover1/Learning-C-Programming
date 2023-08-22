#include <stdio.h>

int main() {
  int grade;
  do {
    printf("Enter a valid grade (greater than 0 and less than 100): ");
    scanf("%d", &grade);
  }while(grade < 0 || grade > 100);
  printf("Thanks! You've inserted %d, which is a legit grade!\n", grade);
  return 0;
}
