#include <stdio.h>

int main(void) {
  int num = 512;
  char c = 'c';
  int age = 22;
  float floatNumber = 5.3;
  FILE *fp;

  fp = fopen("fprintf.txt", "w");

  if (fp != NULL) {
    fprintf(fp, "%d %c %d %f", 512, c, age, floatNumber);
    fclose(fp);
  }
  return 0;
}
