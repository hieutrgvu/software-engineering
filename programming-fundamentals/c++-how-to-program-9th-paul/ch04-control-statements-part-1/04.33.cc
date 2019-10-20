// 4.33 (Sides of a Right Triangle) Write a program that reads three nonzero
// integers and determines and prints whether they’re the sides of a right
// triangle.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int a, b, c;

  std::cout << "Enter three nonzero integers: ";
  std::cin >> a >> b >> c;

  if ((a > 0) && (b > 0) && (c > 0) &&
    (a + b > c) && (a + c > b) && (b + c > a)) {
    // Check right triangle
    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) ||
      (b * b + c * c == a * a)) {
      std::cout << "They could represent the sides of a right triangle.";
    }
    else {
      std::cout << "They could not represent the sides of a right triangle.";
    }
  }
  else {
    std::cout << "They could not represent the sides of a triangle.";
  }

  std::cout << std::endl;
}
