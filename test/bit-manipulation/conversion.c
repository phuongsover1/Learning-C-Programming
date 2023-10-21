#include <stdio.h>

int main(void) {
  char a = 0xaa; /* 10101010 */
  printf("%#x\n", ~a);
  printf("%b\n", 0x55);

  unsigned char b = 0xaa;
  printf("%#x\n", ~b);
  return 0;
}
