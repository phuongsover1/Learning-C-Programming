#include <stdio.h>
#include <stdlib.h>

int main() {
  char c;
  printf("Enter c (0 to exit with successful code, 1 to exit with failure "
         "code): ");
  c = getchar();

  if (c == '0')
    exit(EXIT_SUCCESS);
  else
    exit(EXIT_FAILURE);
  return 0;
}
