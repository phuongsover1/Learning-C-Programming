#include <stdio.h>

int main() {
  int num;
  do {
    printf("Enter num (positive): ");
    scanf("%d", &num);
    if (num <= 0) printf("Num must be a postive number!!\n");
  } while(num <= 0);

  for (int i = 1; i <= num; i++) {
    if (i != num)
      printf("%d,", i);
    else
      printf("%d", i);
  }
  printf("\n");

  for (int i = num; i > 0; i--) {
    if (i != 1)
      printf("%d,", i);
    else
      printf("%d", i);
  }
  printf("\n");


  return 0;
}
