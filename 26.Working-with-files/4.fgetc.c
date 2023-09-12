#include <stdio.h>

int main(void) {
  FILE *fp;
  char myChar;

  fp = fopen("test_fgetc.txt", "r");

  if (fp != NULL) {

    myChar = fgetc(fp);
    printf("The character was read is %c \n", myChar);

    printf("Press key from keyboard: ");
    myChar = fgetc(stdin);
    printf("The character was read from keyboard is %c\n", myChar);

    fclose(fp);
  } else {
    printf("The opening of the file has failed!!");
  }

  return 0;
}
