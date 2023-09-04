#include <stdio.h>
typedef struct date {
  int day;
  int month;
  int year;
} Date;

Date findNextDate(Date currentDate) {
  Date nextDate;
  nextDate.day = 0;
  nextDate.year = 0;
  nextDate.month = 0;

  if (currentDate.day > 31) {
    printf("%d %d %d is not valid date \n", currentDate.day, currentDate.month, currentDate.year);
    return nextDate;
  }
  int isLeapYear = 0;
  if (currentDate.year % 4 == 0 && currentDate.year % 100 != 0 ||
      currentDate.year % 400 == 0)
    isLeapYear = 1;
  if (currentDate.month == 2) {
    if (currentDate.day > 29) {
      printf("%d %d %d is not a valid day!\n", currentDate.day,
             currentDate.month, currentDate.year);
      return nextDate;
    }
    if (currentDate.day == 29) {
      // check leap year
      if (isLeapYear == 0) {
        printf("%d is not a leap year. The day is not a valid day!\n",
               currentDate.year);
        return nextDate;
      }
    }
  }
  if (currentDate.day == 31) {
    switch (currentDate.month) {
    case 2:
    case 4:
    case 6:
    case 9:
    case 11:
      printf("%d only has 30 day. The day is not a valid day!\n",
             currentDate.month);
      return nextDate;
    }
  }
  if (currentDate.day == 28) { // check leap year
    if (currentDate.month == 2) {
      if (isLeapYear == 1) {
        nextDate.day = 29;
        nextDate.month = 2;
        nextDate.year = currentDate.year;
      } else {
        nextDate.day = 1;
        nextDate.month = currentDate.month + 1;
        nextDate.year = currentDate.year;
      }

    } else {
      nextDate.day = currentDate.day + 1;
      nextDate.month = currentDate.month;
      nextDate.year = currentDate.year;
    }
    return nextDate;
  } else if (currentDate.day == 30) {
    switch (currentDate.month) {
    // 31
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      nextDate.day = 31;
      nextDate.month = currentDate.month;
      nextDate.year = currentDate.year;
      return nextDate;
    default:
      nextDate.day = 1;
      nextDate.month = currentDate.month + 1;
      nextDate.year = currentDate.year;
      return nextDate;
    }
  } else if (currentDate.day == 31) {
    switch (currentDate.month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
      nextDate.day = 1;
      nextDate.month = currentDate.month + 1;
      nextDate.year = currentDate.year;
      return nextDate;
    case 12:
      // New year
      nextDate.day = 1;
      nextDate.month = 1;
      nextDate.year = currentDate.year + 1;
      return nextDate;
    }
  } else {
    nextDate.day = currentDate.day + 1;
    nextDate.month = currentDate.month;
    nextDate.year = currentDate.year;
    return nextDate;
  }
  return nextDate;
}

int main() {

  Date inputDate, nextDate;
  printf("Enter the day (dd mm yyyy): ");
  scanf("%d%d%d", &inputDate.day, &inputDate.month, &inputDate.year);
  // check ngày nhập là có hợp lệ không đã

  nextDate = findNextDate(inputDate);
  if (nextDate.day != 0) 
    printf("Next date: %d/%d/%d\n", nextDate.day, nextDate.month, nextDate.year);
  return 0;
}
