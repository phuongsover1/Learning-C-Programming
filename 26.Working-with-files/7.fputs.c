#include <stdio.h>

int main(void) {
  FILE *fp;

  puts("Hey man");
  puts("This isi Vlad from AlphaTech");

  fp = fopen("fputs.txt", "w");

  if (fp != NULL) {
    fputs("Hey man", fp);
    fputs("This is  Vlad from AlphaTech", fp);
    fclose(fp);
  }
  return 0;
}
