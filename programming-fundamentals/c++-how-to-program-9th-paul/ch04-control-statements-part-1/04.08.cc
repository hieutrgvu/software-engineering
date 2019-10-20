// 4.8 Write a C++ program that uses the statements in Exercise 4.7 to
// calculate x raised to the y power. The program should have a while
// repetition statement.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int x;
  int y;
  int i = 1;
  int power = 1;

  std::cout << "Enter base as an integer: ";
  std::cin >> x;

  std::cout << "Enter exponent as an integer: ";
  std::cin >> y;

  while (i <= y) {
    power *= x;
    ++i;
  }

  std::cout << power << std::endl;

  return 0;
}
