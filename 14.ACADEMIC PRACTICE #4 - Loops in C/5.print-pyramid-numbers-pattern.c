#include <stdio.h>

// Write a program that receivers an integer - "n".
// The program should print a Pyramid of Numbers
// with the following pattern.
// n = 3
//   1
//  2 3
// 4 5 6
int main() {

  int num, currentValue = 0;
  
  do {
    printf("Enter num (must be a postive): ");
    scanf("%d", &num);
    if (num < 1) 
      printf("Num must be a postive number!!\n");
  } while(num < 1);

  for (int row = 1; row <= num; row++) {
    for (int i = 0; i < num - row; i++) 
      printf(" ");
    for (int i = 0; i < row; i++) {
      if (i == row) {
        printf("%d", ++currentValue);
      }
      printf("%d ", ++currentValue);
    }
    printf("\n");
  }
  printf("\n");
  return 0;
}
