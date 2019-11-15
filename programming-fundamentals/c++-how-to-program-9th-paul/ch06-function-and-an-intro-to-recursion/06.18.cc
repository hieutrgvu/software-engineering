// 6.18 (Exponentiation) Write a function integerPower(base, exponent) that
// returns the value of base^exponent
//
// For example, integerPower(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is a
// positive, nonzero integer and that base is an integer. Do not use any math
// library functions.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int PowInt(int base, int exponent) {
  int result = 1;

  for (int i = 0; i < exponent; i++) {
    result *= base;
  }

  return result;
}

int main() {
  std::cout << "PowInt(3, 4) = " << PowInt(3, 4) << std::endl;
  return 0;
}
