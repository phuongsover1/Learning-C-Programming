#include <stdio.h>

int main(void) {
  FILE* fp;

  fp = fopen("12.writing-numbers-and-their-powers-to-file.txt", "w");

  if (fp != NULL) {
    for (short int i = 1; i <= 10; i++) {
      fprintf(fp, "%d\t%d\n", i, i * i);
    }
    fclose(fp);
  }
  return 0;
}
