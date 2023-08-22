#include <stdio.h>

int main() {
  double result = 0;
  int count = 0;
  int grade;

  printf("Enter your next grade ('-1' to print your average grade ): ");
  scanf("%d", &grade);

  while(grade != -1) {
    ++count;
    result += grade;
    printf("Enter your next grade ('-1' to print your average grade ): ");
    scanf("%d", &grade);
  }
  printf("You've entered %d grades!\n", count);
  if (count != 0)
    printf("Your average score = %lf\n", result / count);
  else 
    printf("Your average score = %lf\n", result);


  return 0;
}
