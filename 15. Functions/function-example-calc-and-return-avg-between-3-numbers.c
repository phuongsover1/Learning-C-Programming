#include <stdio.h>

// Receive 3 numbers -> grade1, grade2, grade3
// Find out the Average between them
// Return this Average

float findAverage(int grade1, int grade2, int grade3) {
  float avg;
  avg = (grade1 + grade2 + grade3) / 3.0;
  return avg;
}
int main() {
  int g1, g2, g3;
  printf("Enter 3 grades: ");
  scanf("%d%d%d", &g1, &g2, &g3);

  printf("Average = %.2f\n", findAverage(g1, g2, g3));
  return 0;
}
