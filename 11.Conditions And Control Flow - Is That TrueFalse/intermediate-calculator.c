#include <stdio.h>

int main() {
  char operator;
  float num1, num2;

  printf("Enter operator which you want to compute ('+', '-', '*', '/', '%'): ");
  scanf("%c", &operator);

  printf("Enter first number: ");
  scanf("%f", &num1);

  printf("Enter second number: ");
  scanf("%f", &num2);

  switch(operator) {
    case '+':
      printf("Result of %.2f %c %.2f is %.2f\n", num1, operator, num2, num1 + num2);
      break;
    case '-':
      printf("Result of %.2f %c %.2f is %.2f\n", num1, operator, num2, num1 - num2);
      break;
    case '*':
      printf("Result of %.2f %c %.2f is %.2f\n", num1, operator, num2, num1 * num2);
      break;
    case '/':
      printf("Result of %.2f %c %.2f is %.2f\n", num1, operator, num2, num1 / num2);
      break;
    case '%':
      printf("Result of %d %c %d is %d\n", (int)num1, operator, (int) num2, (int)num1 % (int)num2);
      break;
    default:
      printf("OPERATOR IS NOT VALID!!!");
  }
  
  return 0;
}
