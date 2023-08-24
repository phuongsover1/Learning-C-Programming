#include <stdio.h>

// GREETING FUNCTION
// Hello!
// Welcome to the best course (EVER) in C Programming Language!
// Good Luck

void printGreetings() {
  printf("Hello\n");
  printf("Welcome tto the best course (EVER) in C Programming Language!\n");
  printf("Good Luck!\n");
}

int main() {
  printf("Hello to this program. I'm writing from the main function.\n");
  printGreetings();
  printf("Now I'm after the function. Also at 'main'\n");
  return 0;
}
