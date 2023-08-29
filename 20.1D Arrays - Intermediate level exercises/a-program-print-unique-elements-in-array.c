#include <stdio.h>

// Part #1 - Print all Unique Elements in an Array!
// Part #2 - Count the number of Unique Elements in an Array!

#define SIZE 100

int main() {
  int arr[SIZE] = {0};
  int dupArr[SIZE] = {0};
  int n, dupArrLength = 0, countUnique = 0;

  do {
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    if (n < 1)
      printf("The length must be larger 0!!!\n");

  } while (n < 1);

  for (int i = 0; i < n; i++) {
    printf("Enter value for arr[%d]= ", i);
    scanf("%d", &arr[i]);
  }

  printf("All unique values in array is: ");

  for (int i = 0; i < n; i++) {
    // Check if current arr[i] value has already in dupArr
    int inDupArr = 0;
    for (int j = 0; j < dupArrLength; j++) {
      if (arr[i] == dupArr[j]) {
        inDupArr = 1;
        break;
      }
    }
    if (inDupArr) // current arr[i] is duplicate value, so next to the its right
                  // element
      continue;
    else {
      int isDuplicate = 0;
      for (int j = i + 1; j < n; j++) {
        if (arr[j] == arr[i]) {
          dupArr[dupArrLength++] = arr[i];
          isDuplicate = 1;
          break;
        }
      }
      if (!isDuplicate) {
        printf("%d ", arr[i]);
        ++countUnique;
      }
    }
  }
  printf("\n");
  printf("The number of Unique Elements is %d\n", countUnique);

  return 0;
}
