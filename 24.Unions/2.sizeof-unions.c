#include <stdio.h>

union Data {
  int i;
  int f;
  char str[20];
};
int main(void) {

  union Data data;
  
  printf("Memory size occupied by data: %zu\n", sizeof(data));
  return 0;
}
