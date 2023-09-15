#include <stdio.h>

// fscanf(<pointer_to_a_file>, <placeholder>, <parameters>);

int main(void) {
  int num, age;
  char c;
  float floatNumber;

  FILE *fp;

  fp = fopen("fprintf.txt", "r");

  if (fp != NULL) {
    fscanf(fp, "%d", &num);
    fscanf(fp, " %c %d %f", &c, &age, &floatNumber);

    printf("read value: num = %d, c = %c, age = %d, floatNumber = %f\n", num, c,
           age, floatNumber);
    fclose(fp);
  }

  return 0;
}
