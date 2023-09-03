#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
int main() {
  int arr[SIZE];
  int arrLength, sum = INT_MAX;

  do {
    printf("Enter the length of the array: ");
    scanf("%d", &arrLength);
    if (arrLength < 1)
      printf("The length is not valid!!\n");
  } while (arrLength < 1);

  for (int i = 0; i < arrLength;i++){
    printf("Enter value for arr[%d] = ",i);
    scanf("%d", &arr[i]);
  }

  int index1, index2;
  for (int i = 0; i < arrLength; i++)
    for (int j = i + 1; j < arrLength; j++) {
      if (i == j)
        continue;
      if (sum > abs(arr[i] + arr[j])) {
        sum = abs(arr[i] + arr[j]);
        index1  = i;
        index2 = j;
      }
    }

  printf("Two elements is %d, %d, whose sum = %d\n", arr[index1], arr[index2], sum);

  return 0;
}
