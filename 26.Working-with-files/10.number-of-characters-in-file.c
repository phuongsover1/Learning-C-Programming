#include <stdio.h>

int main(void) {

  FILE *fp;
  int count = 0;
  char c;

  fp = fopen("10.number-of-characters-in-file.txt", "r");

  if (fp != NULL) {
    while((c = fgetc(fp)) != EOF) {
      if (c != '\n') 
        ++count;
      fputc(c, stdout);
    }
    fclose(fp);
  }

  printf("Number of characters in file = %d\n", count);
  return 0;
}
