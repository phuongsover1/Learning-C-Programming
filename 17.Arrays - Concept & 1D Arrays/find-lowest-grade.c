#include <stdio.h>

int main() {
  int grades[5];
  int i;
  int lowestGrade;

  for (i = 0; i < 5; i++){
    printf("Enter grade no.%d: \n", i+1);
    scanf("%d", &grades[i]);
  }
  lowestGrade = grades[0];

  for (i = 1; i < 5; i++)
    if (grades[i] < lowestGrade)
      lowestGrade = grades[i];
  printf("Your lowest grades is: %d \n", lowestGrade);

  printf("Your grades are: %#x \n", grades);
  return 0;
}
