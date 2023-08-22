#include <stdio.h>

// write a program that receives an integer - "n"
// The program should print a right-angle triangle
// with the following pattern up to a given "n".
//
// n = 3
// 1
// 12
// 123
//
// n = 5
// 1
// 12
// 123
// 1234
// 12345

int main() {
  int n;
  do {
    printf("Enter n: ");
    scanf("%d", &n);
    if (n < 0) {
      printf("N is not valid. Must be an positive number!\n");
    }
  } while (n < 0);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d", j);
    }
    printf("\n");
  }

  return 0;
}
