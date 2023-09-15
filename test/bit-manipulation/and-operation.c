#include <stdio.h>

int main(void) {

  unsigned char a = 0xaa; /* 10101010 */
  printf("%#x\n", a & 0xf0); /* and 11110000 */

  return 0;
}
