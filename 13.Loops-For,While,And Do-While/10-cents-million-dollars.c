#include <stdio.h>

int main() {
  float totalMoney = 0.01;

  for(int i = 1; i <= 30; i++) {
    printf("Day %d Amount %.2f\n", i, totalMoney);
    totalMoney = totalMoney * 2;
  }

  printf("Total Amount after 30 days is: %.2f\n", totalMoney);

  return 0;
}
