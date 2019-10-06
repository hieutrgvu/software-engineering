// 2.25 (Multiples) Write a program that reads in two integers and determines
// and prints if the first is a multiple of the second. [Hint: Use the modulus
// operator.]

//******************************************************************************
// Resolved by: Hieu vu
//******************************************************************************

#include <iostream>

int main() {
  int number_1;
  int number_2;

  std::cout << "Enter two integers: ";
  std::cin >> number_1 >> number_2;

  if ((number_1 % number_2) == 0) {
    std::cout << number_1 << " is a multiple of " << number_2 << std::endl;
  }
  else {
    std::cout << number_1 << " is not a multiple of " << number_2 << std::endl;
  }

  return 0;
}
