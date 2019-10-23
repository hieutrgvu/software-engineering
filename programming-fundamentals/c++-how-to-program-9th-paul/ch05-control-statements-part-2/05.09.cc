// 5.9 (Product of Odd Integers) Write a program that uses a for statement to
// calculate and print the product of the odd integers from 1 to 15.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int product = 1;

  for (int i = 1; i <= 15; i += 2) {
    product *= i;
  }

  std::cout << "The product of odd numbers from 1 to 15 is "
    << product << std::endl;

  return 0;
}
