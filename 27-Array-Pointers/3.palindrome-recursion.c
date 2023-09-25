#include <stdio.h>
#include <string.h>

int isPalindrome(char *arr, int size) {
  if (size < 2)
    return 1;
  if (*arr != *(arr + size - 1))
    return 0;
  return isPalindrome(++arr, size - 2);
}
int main(void) {
  char intStrArr[20];
  printf("Enter array of intergers: ");
  scanf("%s", intStrArr);
  printf("Array is %s\n", isPalindrome(intStrArr, strlen(intStrArr))
                              ? "palindrome\n"
                              : "not palindrome");
  return 0;
}
