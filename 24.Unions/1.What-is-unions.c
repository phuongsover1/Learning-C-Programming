#include <stdio.h>
#include <string.h>
// Unions !

// What is a Union ?
//  1. User-Defined Datatype.
//  2. A collections of elements (or variable) that are kind of being held
//  in the region in the memory

// How to define a Union
// union <union_name> {
//   datatype1 field1;
//   datatype2 field2;
//   ...j
// };

union info {
  char firstName[20];
  int age;
};

union minmax {
  int min;
  int max;
  double average;
};

int main(void) {
  // Template - for creating a Union Variable
  // union <union_name> <variable_name>;
  union info myVariable;
  myVariable.age = 30;
  printf("MyVariable.age = %d\n", myVariable.age);
  strcpy(myVariable.firstName, "Phuong");
  printf("MyVariable.firstName = %s\n", myVariable.firstName);
  printf("MyVariable.age = %d\n", myVariable.age);

  return 0;
}
