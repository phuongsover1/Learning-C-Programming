#include <limits.h>
#include <stdio.h>

void bit_disp(unsigned int num);

int main(void) {
  unsigned int a;

  printf("Please enter number between 0~%65535: ",);
  while(scanf("%u", &a) != EOF) {
    bit_disp(a);
  }
  return 0;
}

void bit_disp(unsigned int num) {
  int len = sizeof(unsigned int) * CHAR_BIT;

  for (int i = len - 1; i >= 0; i--) {
    printf("%hd", (num >> i) & 0x001);
    printf("\n");
  }
  printf("test: %#b & %#b: %#b", 0b1101, 0b11, 0b1101 & 0b11);
}
