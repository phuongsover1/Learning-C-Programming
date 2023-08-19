#include <stdio.h>

int main() {
  int data;

  printf("Enter a number (which only has 3 digits): ");
  scanf("%d", &data);

  int hundreds, tens, units;

  hundreds = data / 100;

  units = data % 10;


  tens = (data % 100) / 10;

  printf("The reserved number of %d is %d\n", data, units * 100 + tens * 10 + hundreds);
  printf("The reserved number of %d is %d%d%d\n", data,units,tens,hundreds);

  return 0;
}
