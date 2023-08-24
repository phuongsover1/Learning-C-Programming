#include <stdio.h>

// Write an EFFICIENT Program that receives
// a "num" from the user.
// The program should calculate and print the SUM of all the numbers
// from "1" up to "num" that can be divided by 3 AND by 5
int main() {
  int num, sum = 0;
  do {
    printf("Enter num: ");
    scanf("%d", &num);
    if (num < 1) {
      printf("Num must be a positive number!!\n");
    }
  } while (num < 1);

  // METHOD #1:
  printf("METHOD #1: \n");
  
  for (int i = 5; i <= num; i++) {
    if (i % 5 == 0 && i % 3 == 0){
      sum += i;
    }
  }

  printf("Sum from 1 up to %d that can be divided by 3 and by 5 = %d\n",num, sum);

  // METHOD #2:
  printf("METHOD #2:\n");
  sum = 0;
  int currentValue = 5;
  for (int i = 1; currentValue <= num; i++) {
    currentValue = 5 * i;
    if (currentValue <= num && currentValue % 3 == 0) {
      sum += currentValue;
    }
  }

  printf("Sum from 1 up to %d that can be divided by 3 and by 5 = %d\n",num, sum);

  // METHOD #3:
  printf("METHOD #3: \n");
  sum = 0;
  for (int i = 15; i <= num; i += 15) {
    sum += i;
  }

  printf("Sum from 1 up to %d that can be divided by 3 and by 5 = %d\n",num, sum);

  return 0;
}
