#include <stdio.h>

int function() {
  auto int a = 1;
  printf("%d\n", a);

  int opengenus_function() {
    int b = 2;
    printf("%d", b);
  }
  opengenus_function();
}

int main() {
  function();
  return 0;
}
