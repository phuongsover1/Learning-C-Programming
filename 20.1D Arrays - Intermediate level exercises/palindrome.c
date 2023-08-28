#include <stdio.h>

// Palindrome !!!
//

//  [1,3,2,3,1] --> PALINDROME
//  [1,2,3,3,2,1] --> PALINDROME
//  [1,4,6,2] --> NOT A PALINDROME
#define SIZE 100

int main() {
  int array[SIZE] = {0};
  int n;

  do {
    printf("Enter length of array: ");
    scanf("%d", &n);
    if (n <= 0)
      printf("Length must be a positive number!!!\n");
  } while (n <= 0);

  for (int i = 0; i < n; i++) {
    printf("Enter value for array[%d] = ", i);
    scanf("%d", &array[i]);
  }

  // CHECK PALINDROME
  int isPalindrome = 1;
  for (int i = 0; i < n / 2; i++) {
    if (array[i] != array[n - 1 - i]) {
      isPalindrome = 0;
      break;
    }
  }

  if (isPalindrome)
    printf("PALINDROME\n");
  else
    printf("NOT A PALINDROME\n");
  return 0;
}
