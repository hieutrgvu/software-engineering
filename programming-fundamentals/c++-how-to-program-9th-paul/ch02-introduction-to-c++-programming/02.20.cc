// 2.20 (Diameter, Circumference and Area of a Circle) Write a program that
// reads in the radius of a circle as an integer and prints the circle's
// diameter, circumference and area. Use the constant value 3.14159 for pi. Do
// all calculations in output statements. [Note: In this chapter, we've
// discussed only integer constants and variables. In Chapter 4 we discuss
// floating-point numbers, i.e., values that can have decimal points.]

//******************************************************************************
// Resolved by: Hieu vu
//******************************************************************************

#include <iostream>

#define PI 3.14159

int main() {
  int radius;

  std::cout << "Enter circle radius: ";
  std::cin >> radius;

  std::cout << "Diameter is " << radius + radius << std::endl;
  std::cout << "Circumference is " << 2 * radius * PI << std::endl;
  std::cout << "Area is " << PI * radius * radius << std::endl;

  return 0;
}
