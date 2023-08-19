#include <stdio.h>

// Salary [$/Hours]
// Total hours worked in a month [Hours]

int main() {
  float salaryPerHour;
  int totalHoursWorked;

  printf("Enter the salary (per hours): ");
  scanf("%f", &salaryPerHour);

  printf("Enter the number of hours you worked in the last month: ");
  scanf("%d", &totalHoursWorked);
 
  printf("Your monthly salary = %.2f\n", salaryPerHour * totalHoursWorked);

  return 0;
}
