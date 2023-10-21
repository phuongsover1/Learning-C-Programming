#include <stdio.h>
#include <string.h>

int main() {

  char *mnthp[3] = {"January", "February", "March"};

  char **p1, **p2, **p3;
  char *test;
  test = mnthp[0];

  p1 = &mnthp[0];
  p2 = &mnthp[1];
  p3 = &mnthp[2];

  for (int i = 0; i < 3; i++) {
    printf("Address of pointer which pointed to mnthp[%d] = %p\n", i,
           &mnthp[i]);
    printf("Address of value which was pointed by mnthp[%d] = %p\n", i,
           mnthp[i]);
  }

  printf("p1 = %p\n", p1);
  printf("p2 = %p\n", p2);
  printf("p3 = %p\n", p3);

  printf("*p1 = %p\n", *p1);
  printf("*p2 = %p\n", *p2);
  printf("*p3 = %p\n", *p3);
  return 0;
}
