#include <stdio.h>

#define MAX 100

int main (void) {
  FILE* fp;
  char c, character;
  char fileName[MAX];
  unsigned int count = 0;

  printf("Enter character, which you want to total of apperance in a file: ");
  c = getchar();

  printf("Enter filename, in which you want to search: ");
  scanf("%s", fileName);

  fp = fopen(fileName, "r");

  if (fp != NULL) {
    while(( character =  fgetc(fp) ) != EOF) {
      if (character == c)
        ++count;
    }
    printf("Total character '%c' in the file = %u", c, count);

    fclose(fp);
  } else 
    printf("The file is not exist!!!\n");


  return 0;
}
