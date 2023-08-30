#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int d, l;
  srand(time(NULL)); 
  d = rand();
  l = rand();

  printf("d = %d\n", d);
  printf("l = %d\n", l);

  return 0;
}
