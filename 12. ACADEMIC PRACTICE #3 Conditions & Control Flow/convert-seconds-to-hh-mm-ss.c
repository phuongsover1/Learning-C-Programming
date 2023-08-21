#include<stdio.h>

// convert input number (seconds) to total hours, minutes and remaining seconds 
// format: HH:MM:SS

int main() {
  int inputSeconds;
  printf("Enter number of seconds: ");
  scanf("%d", &inputSeconds);

  int hours, minutes, seconds;

  hours = inputSeconds / 3600;
  inputSeconds %= 3600;

  minutes = inputSeconds / 60;
  inputSeconds %= 60;

  seconds = inputSeconds;
  printf("The time (format in HH:MM:SS) is ");

  if (hours > 9)
     printf("%d:", hours);
  else
    printf("%02d:", hours);
  if (minutes > 9)
    printf("%d:", minutes);
  else
    printf("%02d:", minutes);
  if (seconds > 9)
    printf("%d\n", seconds);
  else
    printf("%02d\n", seconds);
  return 0;
}
