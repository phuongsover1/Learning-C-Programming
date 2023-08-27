#include <stdio.h>

int main() {
  int phoneNumbers[10] = {0, 3, 9, 9, 0, 3, 5, 8, 0, 9};
  int maximumNumber = phoneNumbers[0];
  for (int i = 0; i < 10; i++) {
    if (phoneNumbers[i] > maximumNumber)
      maximumNumber = phoneNumbers[i];
  }
  printf("Maximum number my phone number is %d\n", maximumNumber);
  return 0;
}
