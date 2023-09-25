#include <stdio.h>

// 30 10 2001 -> 31 10 2001
// 25 12 1998 -> 26 12 1998
// 28 2 2020 -> 29 2 2020
// 28 2 2019 -> 1 3 2019
// check 28, 29, 30, 31

int main() {
  int day, month, year;
  printf("Enter the day (dd mm yyyy): ");
  scanf("%d%d%d", &day, &month, &year);
  // check ngày nhập là có hợp lệ không đã
  int isLeapYear = 0;
  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    isLeapYear = 1;
  if (month == 2) {
    if (day > 29) {
      printf("%d %d %d is not a valid day!\n", day, month, year);
      return 0;
    }
    if (day == 29) {
      // check leap year
      if (isLeapYear == 0) {
        printf("%d is not a leap year. The day is not a valid day!\n", year);
        return 0;
      }
    }
  }
  if (day == 31) {
    switch (month) {
    case 2:
    case 4:
    case 6:
    case 9:
    case 11:
      printf("%d only has 30 day. The day is not a valid day!\n", month);
      return 0;
    }
  }
  if (day == 28) { // check leap year
    if (month == 2) {
      if (isLeapYear == 1) {
        printf("Next day is %d %d %d\n", 29, 2, year);
      } else {
        printf("Next day is %d %d %d\n", 1, ++month, year);
      }

    } else
      printf("Next day is %d %d %d\n", ++day, month, year);
  } else if (day == 30) {
    switch (month) {
    // 31
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      printf("Next day is %d %d %d\n", 31, month, year);
      break;
    default:
      printf("Next day is %d %d %d\n", 1, ++month, year);
    }
  } else if (day == 31) {
    printf("In 31 day\n");
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
      printf("Next day is %d %d %d\n", 1, ++month, year);
      break;
    case 12:
      // New year
      printf("Next day is %d %d %d\n", 1, 1, ++year);
      break;
    }
  } else {
    printf("Next day is %d %d %d\n", ++day, month, year);
  }

  return 0;
}
