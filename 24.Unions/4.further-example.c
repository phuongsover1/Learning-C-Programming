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

  return 0;
}
