#include <stdio.h>
#include <string.h>

int main() {
  char a[10], b[10];

  strcpy(a, "some");

  printf("strcpy(a,\"some\"): %s\n", a);

  strcpy(b, "day");
  printf("strcpy(b,\"some\"): %s\n", b);

  strcpy(a,b);
  printf("strcpy(a,b) -> a: %s\n", a);
  printf("strcpy(a,b) -> b: %s\n", a);


  return 0;
}
