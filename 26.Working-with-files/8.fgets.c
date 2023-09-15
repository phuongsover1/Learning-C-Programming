#include <stdio.h>
#include <string.h>

// fgets(<sring>, <int/length_limit>, <pointer_to_a_file>)
int main(void) {
  char myString[10];
  char *returnedStr;
  int count = 0;
  FILE *fp;

  fp = fopen("8.fgets.txt", "r");

  if (fp != NULL) {
    while (1) {
      returnedStr =  fgets(myString, 10, fp);
      if (returnedStr != NULL) {
        *returnedStr = 'A';
        printf("string #%d read: %s\n", ++count, myString);
        printf("content of returnedStr = %s\n", returnedStr);
      } else  {
        printf("returnedStr = NULL\n");
        break;
      }

    }
  }

  return 0;
}
