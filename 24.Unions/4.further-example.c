#include <stdio.h>

union Student {
  int ID;
  double average;
};
int main(void) {
  union Student student1;
  union Student *ptrStudent;

  ptrStudent = &student1;

  ptrStudent->ID = 3;

  printf("Student's ID: %d\n", student1.ID);
  ptrStudent->average = 3.4;
  printf("Student's ID: %d\n", student1.ID);
  printf("Student's Average: %lf\n", student1.average);
  return 0;
}
