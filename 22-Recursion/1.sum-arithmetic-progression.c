#include <stdio.h>

int sumToN(int n) {
  if (n == 1)
    return 1;
  return n + sumToN(n - 1);
}

int main() {

  return 0;
}
