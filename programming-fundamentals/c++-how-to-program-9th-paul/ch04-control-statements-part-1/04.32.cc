// 4.32 (Sides of a Triangle) Write a program that reads three nonzero double
// values and determines and prints whether they could represent the sides of
// a triangle.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  double a, b, c;

  std::cout << "Enter three nonzero double values: ";
  std::cin >> a >> b >> c;

  if ((a > 0) && (b > 0) && (c > 0) &&
    (a + b > c) && (a + c > b) && (b + c > a)) {
    std::cout << "They could represent the sides of a triangle.";
  }
  else {
    std::cout << "They could not represent the sides of a triangle.";
  }

  std::cout << std::endl;
}
