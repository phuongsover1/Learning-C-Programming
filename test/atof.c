#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
  double d; 
  char str[] = "123.456";
  d = atof(str);

  printf("c = %lf\n", d);

  strcpy(str, "123.45f");

  d = atof(str);
  printf("c = %lf\n", d);

  strcpy(str, "f123");

  d = atof(str);
  printf("c = %lf\n", d);
  return 0;
}
