// 6.36 (Recursive Exponentiation) Write a recursive function power( base,
// exponent ) that, when invoked, returns
//    base^exponent
// For example, power( 3, 4 ) = 3 * 3 * 3 * 3. Assume that exponent is an
// integer greater than or equal to 1. Hint: The recursion step would use the
// relationship
//    base^exponent = base * base^(exponent - 1)
// and the terminating condition occurs when exponent is equal to 1, because
//    base^1 = base

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

double pow(double base, double exponent) {
  if (exponent == 0) return 1;
  if (exponent == 1) return base;
  return base * pow(base, exponent - 1);
}

int main() {
  int base;
  int exp;

  std::cout << "Input base and exponent: ";
  std::cin >> base >> exp;
  std::cout << "pow(" << base << ", " << exp << ") = " << pow(base,exp)
    << std::endl;

  return 0;
}
