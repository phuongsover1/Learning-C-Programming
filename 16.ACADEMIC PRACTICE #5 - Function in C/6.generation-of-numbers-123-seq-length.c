#include <stdio.h>

// Function Receives Some Number - "length"
// Return -->
//    if length <= 9
//      123456,...,length
//    else e(if length > 10)
//      9999...length
//
// Example
//    - length = 3 --> 123
//    - length = 5 --> 12345
//    - length = 12 --> 999999999999

long nineSequence(int length) {
  long result = 0;
  for (int i = 0; i < length; i++)
    result = result * 10 + 9;
  return result;
}

long oneToNine(int length) {
  long result = 0;
  for (int i = 1; i <= length; i++)
    result = result * 10 + i;
  return result;
}

long numberSequences(int length) {
  long result = 0;
  if (length <= 9)
    result = oneToNine(length);
  else
    result = nineSequence(length);

  return result;
}
int main() {
  int num;

  do {
    printf("Enter length of sequence: ");
    scanf("%d", &num);
    if (num < 1)
      printf("Length must be larger than 0!!\n");
  } while (num < 1);

  printf("Sequence number of %d is %ld\n", num, numberSequences(num));

  return 0;
}
