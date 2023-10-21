#include <stdio.h>

int main(void) {
  unsigned char a = 0xaa; /* 10101010 */
  printf("%#x\n", a ^ 0x0f); /* xor 00001111 */

  return 0;
}
