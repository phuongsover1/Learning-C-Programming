#include <stdio.h>

int totalCharacterEqual(char c) {
  char inputChar;
  scanf(" %c", &inputChar);
  getchar();

  if (inputChar == '$') 
    return 0;
  if (inputChar == c)
    return 1 + totalCharacterEqual(c);
  return totalCharacterEqual(c);


}
int main() {

  char c;
  puts("Enter character which you want to count: ");
  scanf("%c%*c", &c);
  puts("Entering each character than pressing Enter: ('$' to stop):");
  printf("Total characters in sequence, which is equal to %c: %d\n", c, totalCharacterEqual(c));

  return 0;

}
