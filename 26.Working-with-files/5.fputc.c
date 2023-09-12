#include <stdio.h>

int main(void) {
  FILE *fp;

  fp = fopen("test_fputc.txt", "w");

  if (fp != NULL) {
    fputc('H', fp);
    fputc('e', fp);
    fputc('y', fp);

    fclose(fp);
  }
  fputc('N', stdout); // equi to putchar('N');

  return 0;
}

