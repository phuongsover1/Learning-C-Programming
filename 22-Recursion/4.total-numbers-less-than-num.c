#include <stdio.h>

/*
* We have to write a recursive - function that will
* receive an integer value "num"
* read a sequece of numbers from thee user.. Up until "-1"
* return the total numbers smaller than the "num" value
*
* num = 5
* 6, 8, 10, -3, 1, 7, -1
* 
* Return 2
*/

int totalNumberLessThanN(int num) {
  int inputNum;
  scanf("%d", &inputNum);
  if(inputNum == -1)
    return 0;
  if (inputNum < num)
    return 1 + totalNumberLessThanN(num);
  return totalNumberLessThanN(num);

}
int main() {
  int num;

  printf("Enter num: ");
  scanf("%d", &num);


  printf("Total number less than %d is %d\n", num, totalNumberLessThanN(num));


  return 0;
}
