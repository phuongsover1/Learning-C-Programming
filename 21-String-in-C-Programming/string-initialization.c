#include <stdio.h>

int main() {
  printf("Array of characters: \n");
  char charsArray[] = {'H', 'e', 'l', 'l', 'o'};
  printf("Print array of characters: %s\n", charsArray);

  printf("String initialization: \n");
  char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
  printf("Print str: %s\n", str);

  char str1[10];
  printf("Enter str1: ");
  scanf("%9s", str1);
  for (int i =0 ; str1[i] != '\0'; i++)
    printf("%c ", str1[i]);
  return 0;
}
