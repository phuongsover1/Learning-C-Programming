#include <stdio.h>
#include <string.h>

int main() {
  char a[128], b[128];

  scanf("%s", a);
  scanf("%s", b);

  if(strcmp(a, b) == 0) {
    printf("0\n");
  } else if (strcmp(a,b) > 0) {
    printf("a is larger than b\n");
  } else 
    printf("a is less than b\n");
  return 0;
}
