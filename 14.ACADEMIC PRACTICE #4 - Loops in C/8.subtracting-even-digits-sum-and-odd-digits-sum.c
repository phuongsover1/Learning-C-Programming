#include <stdio.h>

// Receives some "num" 7452
// EvenDigitsSum = 4 + 2 = 6
// OddDigitsSum = 7 + 5 = 12
// printf (EvenDigitsSum - OddDigitsSum)

int main() {

  int evenDigitsSum = 0, oddDigitsSum = 0;
  int num;

  do {
    printf("Enter num (must larger than or equal to 0): ");
    scanf("%d", &num);

    if (num < 0) {
      printf("Num must be larger than or equal to 0!!\n");
    }


    
  }while (num < 0);

  while(num != 0) {
    int lastDigit = num % 10;
    if (lastDigit % 2 == 0) 
      evenDigitsSum += lastDigit;
    else
      oddDigitsSum += lastDigit;
    num /= 10;
  }

  printf("evenDigitsSum = %d\n", evenDigitsSum);
  printf("oddDigitsSum = %d\n", oddDigitsSum);

  printf("evenDigitsSumy - oddDigitsSum = %d\n", evenDigitsSum - oddDigitsSum);


  return 0;
}
