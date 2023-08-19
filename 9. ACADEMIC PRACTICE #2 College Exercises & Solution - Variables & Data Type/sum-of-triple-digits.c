#include <stdio.h>

// entered value: 123
// output : 1 + 2 + 3 = 6
int main() {
  int data;
  printf("Enter data (only has 3 digits): ");
  scanf("%d", &data);

  //323
  int firstDigit = data / 100; // 3
  data %=  firstDigit * 100; // 23

  int secondDigit = data / 10;
  data %= secondDigit * 10;

  int thirdDigit = data;

  printf("The sum of 3 digits in %d = %d \n", data, firstDigit + secondDigit + thirdDigit);
  return 0;
}
