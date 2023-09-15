#include <stdio.h>

int main(void) {
  FILE *fp;
  int num1, num2;

  fp = fopen("12.writing-numbers-and-their-powers-to-file.txt", "r");

  if (fp != NULL) {
    while (fscanf(fp, "%d %d", &num1, &num2) != EOF) {
      printf("%d %d\n", num1, num2);
    }
    fclose(fp);
  }

  return 0;
}
