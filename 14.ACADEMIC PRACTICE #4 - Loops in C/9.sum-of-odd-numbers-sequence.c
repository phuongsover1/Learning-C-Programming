#include <stdio.h>

// Receives "n" from the user
// Receive/Read "n" values (integers)
// Sum all the ODD Numbers

int main() {
  int n;
  
  do {
    printf("Enter n (must be larger than 0) - The number of values in a sequence: ");
    scanf("%d",&n);

    if (n <= 0) 
      printf("N must be larger than 0!!\n");
  } while(n <= 0);

  int sum = 0;
  while(n != 0) {
    n--;
    int number;
    do {
      printf("Enter value: ");
      scanf("%d", &number);
      
      if (number < 0) 
        printf("Number must be larger than 0!!\n");

    } while(number < 0);
    if (number % 2 != 0){
      sum += number;
      printf("Odd number is %d.\n", number);
    }
  };

  printf("Sum all the ODD Numbers = %d\n", sum);

  return 0;
}

