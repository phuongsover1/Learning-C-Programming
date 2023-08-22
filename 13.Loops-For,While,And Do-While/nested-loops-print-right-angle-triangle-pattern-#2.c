#include <stdio.h>

// Write a program that receives an integer - "n".
// The program should print a right-angle triangle
// with the following pattern up to a given "n"
//
// n = 3
// 1
// 22
// 33
// 
// n = 5
// 1
// 22
// 333
// 4444
// 55555


int main() {
  int n;
  do {
    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
      printf("N must be a positive number!\n");
    }
  } while (n <= 0);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d", i);
    }
    printf("\n");
  }
  return 0;
}
