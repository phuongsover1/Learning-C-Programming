#include <ctype.h>
#include <stdio.h>

#define FILE_NAME_LENGTH 100

int main(void) {
  int lowerFrequencyAppearances[26] = {0};
  char fileName[FILE_NAME_LENGTH];
  char readCharacter;
  FILE *fp;

  printf("Enter filename: ");
  scanf("%s", fileName);
  fp = fopen(fileName, "r");

  if (fp != NULL) {
    while ((readCharacter = fgetc(fp)) != EOF) {
      if (isalpha(readCharacter)) {
        if (islower(readCharacter)) {
          ++lowerFrequencyAppearances[readCharacter - 97];
        }
      }
    }

    for (int i = 0; i < 26; i++) {
      printf("%c: %d times ", 97 + i, lowerFrequencyAppearances[i]);
      if (i > 0 && (i + 1) % 8 == 0)
        putchar('\n');
    }
    fclose(fp);
  } else {
    printf("File name '%s' is not exist!!!\n", fileName);
  }

  return 0;
}
