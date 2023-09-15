#include <stdio.h>
int function();

int function() {
  int opengenus_function(); // compilation error
  auto int a = 1;

  printf("%d\n", a);

  int opengenus_function() {
    int b = 2;
    printf("%d", b);
  }


  opengenus_function();
}

int main(void) {
  function();
  return 0;
}
