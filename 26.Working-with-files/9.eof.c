#include <stdio.h>

// EOF // <--> End Of File: Not being stored in file, just being returned by the file when it reaches the end of file. 
//
int main(void) {
  FILE *fp;
  char c;

  fp =  fopen("9.eof.txt", "w");
  if (fp != NULL) {
    fputs("My Name Is Phuong\n", fp);
    fputs("I'm 22 years old.", fp);
    fclose(fp);
  }

  fp = fopen("9.eof.txt", "r");

  if (fp != NULL) {
    while(!feof(fp)) {
      c = fgetc(fp);
      if (c != EOF)
        printf("Read character: %c\n", c);
    }
    fclose(fp);
  }
  return 0;
}
