#include <stdio.h>
#include <string.h>

int main() {
  char a[11] = "Phuong";
  char b[20] = "Le Nguyen Duy";

  strncat(a,b,5);

  printf("a = %s\n", a);
  printf("b = %s\n", b);

  printf("Address of a: %p\n", a);
  printf("Address of b: %p\n", b);
  
  return 0;
}
