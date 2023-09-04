#include <stdio.h>

struct date {
  int day;
  int month;
  int year;
};

struct point {
  int x;
  int y;
};

struct address {
  char state[20];
  char city[10];
  char street[15];
  int number;
};
int main() {
  struct date myDate;
  printf("Enter day: ");
  scanf("%d", &myDate.day);

  printf("Enter month: ");
  scanf("%d", &myDate.month);

  printf("Enter year: ");
  scanf("%d", &myDate.year);


  printf("date: %d/%d/%d\n", myDate.day, myDate.month, myDate.year);

  return 0;
}
