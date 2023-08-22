#include <stdio.h>

// Receiving number of asterisks -> Outputting number of asterisks
// 3 -> ***
// 5 -> *****

int main() {
  int numOfAsterisks;
  printf("Number of asterisk: ");
  scanf("%d", &numOfAsterisks);

  if (numOfAsterisks < 0) 
    printf("Number must be positive.\n");
  else {
    while (numOfAsterisks > 0) {
      printf("*");
      numOfAsterisks--;
    }
    printf("\n");
  }
  return 0;
}
