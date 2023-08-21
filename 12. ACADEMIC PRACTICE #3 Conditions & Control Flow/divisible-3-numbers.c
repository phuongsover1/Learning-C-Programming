#include <stdio.h>
// receives 3 integers
// 3, 12, 9 -> divisible
// 4, 8, 32 -> divisible
// 2, 4, 7 -> not divisible

int main() {
  int num1, num2, num3;
  printf("Enter number 1: ");
  scanf("%d", &num1);

  printf("Enter number 2: ");
  scanf("%d", &num2);

  printf("Enter number 3: ");
  scanf("%d", &num3);
  if (num1 == 0 || num2 == 0 || num3 == 0) {
    printf("Can't divide because num1 or num2 or num3 is 0\n");
  } else {

    if (
        (num1 % num2 == 0 && num3 % num2 == 0) ||
        (num2 % num1 == 0 && num3 % num1 == 0) ||
        (num1 % num3 == 0 % num2 % num3 == 0)
       ) printf("Divisible Number !!\n");
  else printf("Not Divisible Numbers!\n");
  }

  return 0;
}
