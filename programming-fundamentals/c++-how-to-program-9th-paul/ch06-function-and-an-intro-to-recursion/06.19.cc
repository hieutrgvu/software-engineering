// 6.19 (Hypotenuse Calculations) Define a function hypotenuse that calculates
// the hypotenuse of a right triangle when the other two sides are given. The
// function should take two double arguments and return the hypotenuse as a
// double. Use this function in a program to determine the hypotenuse for each
// of the triangles shown below.
//
//      Triangle    Side 1    Side 2
//      1           3.0       4.0
//      2           5.0       12.0
//      3           8.0       15.0

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <iomanip>
#include <cmath>

int CalculateHypotenuse(double side_1, double side_2) {
  return sqrt(side_1 * side_1 + side_2 * side_2);
}

int main() {
  std::cout << std::setw(10) << "Triangle"
    << std::setw(8) << "Side 1"
    << std::setw(8) << "Side 2"
    << std::setw(12) << "Hypotenuse"
    << std::endl;

  std::cout << std::setw(10) << 1
    << std::setw(8) << 3.0
    << std::setw(8) << 4.0
    << std::setw(12) << CalculateHypotenuse(3.0, 4.0)
    << std::endl;

  std::cout << std::setw(10) << 2
    << std::setw(8) << 5.0
    << std::setw(8) << 12.0
    << std::setw(12) << CalculateHypotenuse(5.0, 12.0)
    << std::endl;

  std::cout << std::setw(10) << 3
    << std::setw(8) << 8.0
    << std::setw(8) << 15.0
    << std::setw(12) << CalculateHypotenuse(8.0, 15.0)
    << std::endl;

  return 0;
}
