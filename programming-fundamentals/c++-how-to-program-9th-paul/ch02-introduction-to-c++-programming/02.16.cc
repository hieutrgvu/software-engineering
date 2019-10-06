// 2.16 (Arithmetic) Write a program that asks the user to enter two numbers,
// obtains the two numbers from the user and prints the sum, product,
// difference, and quotient of the two numbers.

//******************************************************************************
// Resolved by: Hieu vu
//******************************************************************************

#include <iostream>

int main() {
  float number_1;
  float number_2;

  std::cout << "Enter two numbers: ";
  std::cin >> number_1 >> number_2;

  std::cout << "Sum = " << number_1 + number_2 << std::endl;
  std::cout << "Product = " << number_1 * number_2 << std::endl;
  std::cout << "Difference = " << number_1 - number_2 << std::endl;
  std::cout << "Quotient = " << number_1 / number_2 << std::endl;

  return 0;
}
