#include <stdio.h>

int main() {
  int num ;
  do{
    printf("Enter number: ");
    scanf("%d", &num);
    if (num < 0)
      printf("Num must be an positive number!!\n");

  } while(num < 0);

  int sum = 0;
  for (int i = 1; i <= num; i++) {
    sum += i;
  }

  printf("SUM = %d\n", sum);

  return 0;
}
