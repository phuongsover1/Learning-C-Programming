#include <stdio.h>

int main(void) {
  int num, num1;

  while (scanf("%d", &num) != EOF) {
    printf("continue\n");
    printf("Enter num1: ");
    scanf("%d", &num1);
  }
  return 0;
}
