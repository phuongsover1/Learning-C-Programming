#include <stdio.h>
#include <string.h>

int main() {
  char a[10] = "Phuong";
  char b[20] = "Le nguyen Duy Phuong"; 
  strncpy(a, b, 9);
  printf("a = %s\n", a);
  printf("b = %s\n", b);
  return 0;
}
