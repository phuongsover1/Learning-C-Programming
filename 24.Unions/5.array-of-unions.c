#include <stdio.h>

typedef union Student {
  int ID;
  double average;
} student;
int main(void) {
  int i;
  student studentsArray[3]; // Array of unions

  for (i = 0; i < 3; i++) {
    printf("Enter ID #%d: ", i + 1);
    scanf("%d", &studentsArray[i].ID);
  }
  for (i = 0; i < 3; i++) {
    printf("Enter ID #%d = %d\n", i + 1, studentsArray[i].ID);
  }

  return 0;
}
