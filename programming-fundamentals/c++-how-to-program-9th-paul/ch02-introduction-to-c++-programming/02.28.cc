// 2.28 (Digits of an Integer) Write a program that inputs a five-digit
// integer, separates the integer into its digits and prints them separated by
// three spaces each. [Hint: Use the integer division and modulus operators.]
// For example, if the user types in 42339, the program should print:
//
// 4   2   3   3   9

//******************************************************************************
// Resolved by: Hieu vu
//******************************************************************************

#include <iostream>

int main() {
  int number;
  int digit_1;
  int digit_2;
  int digit_3;
  int digit_4;
  int digit_5;

  std::cout << "Enter a five-digit integer: ";
  std::cin >> number;

  digit_5 = number % 10;
  number /= 10;
  digit_4 = number % 10;
  number /= 10;
  digit_3 = number % 10;
  number /= 10;
  digit_2 = number % 10;
  digit_1 = number / 10;

  std::cout << digit_1 << "   ";
  std::cout << digit_2 << "   ";
  std::cout << digit_3 << "   ";
  std::cout << digit_4 << "   ";
  std::cout << digit_5 << std::endl;

  return 0;
}
