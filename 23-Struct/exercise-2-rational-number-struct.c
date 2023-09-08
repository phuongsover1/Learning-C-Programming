#include <stdio.h>

/*
*** Exercise - Rational Numbers! ***
* Design and develop a rational number struct, called Rational.
* A rational number consists of two parts:
* 1. numerator
* 2. denomirator
* For example: 1/3, 2/5, 7/3, ...
* Provide increment, decrement, addition, substraction, multiplication,
* division, smaller, bigger, equal and not equal functions to make
* relational / mathematical operations on variables of a rational type.
*
* Write a 'main function' to check outu the correctness of your functions.
* Print the results before and after any operation that you do.
*/

typedef struct rational {
  int numerator;
  int denomirator;
} Rational;

void printRational(Rational *r) {
  printf("%d/%d\n", (*r).numerator, (*r).denomirator);
}

void increment(Rational *r) {
  (*r).numerator = (*r).numerator + (*r).denomirator;
}

void decrement(Rational *r) { r->numerator = r->numerator - r->denomirator; }

Rational addition(Rational r1, Rational r2) {
  Rational result;
  if (r1.denomirator == r2.denomirator) {
    result.numerator = r1.numerator + r2.numerator;
    result.denomirator = r1.denomirator;
  } else {
    result.denomirator = r1.denomirator * r2.denomirator;
    result.numerator =
        r1.numerator * r2.denomirator + r2.numerator * r1.denomirator;
  }
  return result;
}

Rational subtraction(Rational r1, Rational r2) {
  Rational result;
  if (r1.denomirator == r2.denomirator) {
    result.numerator = r1.numerator - r2.numerator;
    result.denomirator = r1.denomirator;
  } else {
    result.denomirator = r1.denomirator * r2.denomirator;
    result.numerator =
        r1.numerator * r2.denomirator - r2.numerator * r1.denomirator;
  }
  return result;
}

Rational multiplication(Rational r1, Rational r2) {
  Rational result = {.numerator = r1.numerator * r2.numerator,
                     .denomirator = r1.denomirator * r2.denomirator};
  return result;
}

Rational division(Rational r1, Rational r2) {
  Rational result = {.numerator = r1.numerator * r2.denomirator,
                     .denomirator = r1.denomirator * r2.numerator};
  return result;
}

int smaller(Rational r1, Rational r2) {
  return r1.numerator / (float)r2.denomirator <
         r2.numerator / (float)r2.denomirator;
}

int bigger(Rational r1, Rational r2) {
  return r1.numerator / (float)r1.denomirator >
         r2.numerator / (float)r2.denomirator;
}

int equal(Rational r1, Rational r2) {
  return r1.numerator / (float)r1.denomirator ==
         r2.numerator / (float)r2.denomirator;
}

int notEqual(Rational r1, Rational r2) {
  return r1.numerator / (float)r1.denomirator !=
         r2.numerator / (float)r2.denomirator;
}

int main() {
  Rational r1 = {1,3};
  printRational(&r1);
  increment(&r1);
  printRational(&r1);

  r1.numerator = 1;
  r1.denomirator = 3;
  Rational r2 = {1,3};
  Rational resultOfAdding = addition(r1, r2);
  printRational(&resultOfAdding);
  printf("%d\n", equal(r1, r2));

  return 0;
}
