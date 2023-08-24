#include <stdio.h>

// Write a program that receives a 'num' from the user.
// The program should print the "num" even numbers (starting from 2)
//
// EX#1: 5 -> 2,4,6,8,10
// EX#2: 7 -> 2,4,6,8,10,12,14
int main() {
  int numOfEvenNumber;
  do {
    printf("Enter num: ");
    scanf("%d", &numOfEvenNumber);
    if (numOfEvenNumber <= 0)
      printf("Num must be a positive number !!!\n");
  } while (numOfEvenNumber <= 0);

  // Method #1: 
  printf("Method #1: \n");
  int i = 2;
  int count = 0;
  while (count != numOfEvenNumber) {
    printf("%d", i);
    ++count;
    i = i + 2;
    if (count != numOfEvenNumber)
      printf(",");
    
  }
  printf("\n");

  // Method #2:
  printf("Method #2: \n");
  count = 0;
  i = 2;
  while (count != numOfEvenNumber){
    if (i % 2 == 0) {
      printf("%d", i);
      ++count;
      if (count != numOfEvenNumber)
        printf(",");
    }
    i++;
  }

  printf("\n");
  
  // Method #3:
  for (int i = 1; i <= numOfEvenNumber; i++) { // 1,2,3,4,5 -> 2,4,6,8,10
    printf("%d ", i*2);
  }
  printf("\n");
  return 0;
}
