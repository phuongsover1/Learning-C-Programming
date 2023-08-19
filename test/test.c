#include <stdio.h>

int main() {
  // 12 - 3000, 8 - 5000,@# # V 
  long change = 10000 - 468;
  int numOf5000PaperMoney, numOf1000PaperMoney;

  numOf5000PaperMoney = change / 5000;
  change %= 5000;

  numOf1000PaperMoney = change / 1000;
  change %= 1000;

  printf("Number Of 5000 Paper Money = %d\n", numOf5000PaperMoney);
  printf("Number Of 1000 Paper Money = %d\n", numOf1000PaperMoney);
  printf("Number of 1 Coin = %d\n", change % 1);
  return 0;
}
