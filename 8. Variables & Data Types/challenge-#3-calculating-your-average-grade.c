#include <stdio.h>

int main() {
 int score1, score2, score3;
   double averageScore;
   printf("Enter your 1st score: ");
   scanf("%d", &score1);
  printf("Enter your 2nd score: ");
  scanf("%d", &score2);
  printf("Enter your 3rd score ");
  scanf("%d", &score3);

  averageScore = (score1 + score2 + score3) / (double)3;
  printf("Your average score is %lf", averageScore);
  return 0;
}
