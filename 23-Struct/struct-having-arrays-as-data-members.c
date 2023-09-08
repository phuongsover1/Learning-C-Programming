#include <stdio.h>

// Structs having arrays as data members
typedef struct employee {
  char name[10];
  float age;
  int id;
} Employee;
int main() {
  Employee emp1;
  Employee emp2 = {"Jake", 24.5, 123};

  // Using the '=' to copy 'value-by-value' (the members of one struct variable to another of the same type)
  // note: copying static arrays in assignment between two structs variables is a little bit different
  //  than "simply" copying an array (element by element).
  emp1 = emp2;
  
  printf("Employee #1 name is %s\n", emp1.name);
  printf("Employee #1 age is %.1f\n", emp1.age);
  printf("Employee #1 id is %d\n", emp1.id);
  printf("Employee #2 name is %s\n", emp2.name);
  printf("Employee #2 age is %.1f\n", emp2.age);
  printf("Employee #2 id is %d\n", emp2.id);

  emp1.name[0] = 'P';
  emp1.id = 33;

  printf("Employee #1 name is %s\n", emp1.name);
  printf("Employee #1 age is %.1f\n", emp1.age);
  printf("Employee #1 id is %d\n", emp1.id);
  printf("Employee #2 name is %s\n", emp2.name);
  printf("Employee #2 age is %.1f\n", emp2.age);
  printf("Employee #2 id is %d\n", emp2.id);


  return 0;
}
