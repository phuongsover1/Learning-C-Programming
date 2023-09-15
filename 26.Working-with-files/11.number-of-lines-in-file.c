#include <stdio.h>

int main(void) {

  FILE* fp;
  short int numOfLines = 0;
  char c;

  fp = fopen("11.number-of-lines-in-file.txt", "r");

  if (fp != NULL) {

    while((c = fgetc(fp)) != EOF) {
      if (c == '\n')
        ++numOfLines;
    }
    fclose(fp);
    fprintf(stdout, "There are %d lines in the file\n",numOfLines);
  }
  return 0;
}
