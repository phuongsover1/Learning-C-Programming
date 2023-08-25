#include <stdio.h>

// Function Receives Some Numnber - "length"
// 999..9
// Examples:
//  - length = 3 --> 999
//  - length = 5 --> 99999

void sequence9s(int length) {
  long result = 0;
  printf("9s sequence of length %d is ", length);
  for (int i = 0; i < length; i++) 
    printf("9");
  printf("\n");
}
int main() {
  int length;
  do {
    printf("Enter length of 9s sequence: ");
    scanf("%d", &length);
    if (length < 1)
      printf("Length must be a positive number!!\n");
  } while (length < 1);

  sequence9s(length);


  return 0;
}
