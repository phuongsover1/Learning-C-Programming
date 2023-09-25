#include <stdio.h>

int main(void) {
  char ch[20];
  int data[20];

  printf("size of char: %2lu\n", sizeof(char));
  printf("size of int: %2lu\n", sizeof(int));
  printf("size of ch array: %2lu\n", sizeof(ch));
  printf("size of data array: %2lu\n", sizeof(data));
  return 0;
}
