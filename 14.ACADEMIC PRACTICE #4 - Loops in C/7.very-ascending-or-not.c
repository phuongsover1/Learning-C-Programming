#include <stdio.h>


// Write a Program that receives a "size"
// value from the user
//
// The program should read a  sequence of "size" numbers
// and check if the numbers are "Very Ascensding" or not.
//
// EX #1: 7 -> 1, 9, 14, 15, 13, 21, 26 (Very Ascending)
// EX #2: 3 -> 2, 1, 10 (NOT Very Ascending)

int main() {
  int size, isAscending = 1;
  int lastValue = -1, currentValue;
  
  
  do {
    printf("Enter size: ");
    scanf("%d", &size);
    
    if (size < 1) 
      printf("Size must be a positive number!!\n");
  } while (size < 1);

  int count = 0;
  do {
    count++;
    if (count == 1) {
      printf("Enter size %d = ", count);
      scanf("%d", &currentValue);
      if (currentValue < 1) {
        count--;
        printf("Size must be a positive number!!\n");
      }
    } else {
      printf("Enter size %d = ", count);
      lastValue = currentValue;
      scanf("%d", &currentValue);
      if (currentValue < 1) {
        count--;
        printf("Size must be a positive number!!\n");
      } else {
        if (currentValue < lastValue) 
          isAscending = 0;
      }
    }
  } while(count + 1 <= size);
  if (isAscending)
    printf("Very Ascending!!\n");
  else 
    printf("NOT Very Ascending!!\n");


  return 0;
}
