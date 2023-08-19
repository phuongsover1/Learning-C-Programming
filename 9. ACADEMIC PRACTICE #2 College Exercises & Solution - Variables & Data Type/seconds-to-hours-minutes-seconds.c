#include <stdio.h>
// seconds to hours, minutes, seconds
// 40000 -> 01:06:40

int main() {
  long inputSeconds;
  int hours, minutes, seconds;

  printf("Enter the number of seconds (that you want to convert): ");
  scanf("%ld", &inputSeconds);

  hours = inputSeconds / 3600;
  inputSeconds %= 3600;

  minutes = inputSeconds / 60;
  inputSeconds %= 60;

  seconds = inputSeconds;

  printf("Result = %d:%d:%d", hours, minutes, seconds);

  return 0;
}
