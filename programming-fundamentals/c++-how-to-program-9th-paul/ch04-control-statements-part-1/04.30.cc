// 4.30 (Calculating a Circle's Diameter, Circumference and Area) Write a
// program that reads the radius of a circle (as a double value) and computes
// and prints the diameter, the circumference and the area. Use the value
// 3.14159 for π.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************.

#include <iostream>

#define PI 3.14159

int main() {
  double diameter;

  std::cout << "Enter circle's diameter: ";
  std::cin >> diameter;

  std::cout << "Diameter: " << diameter << std::endl;
  std::cout << "Circumference: " << diameter * PI << std::endl;
  std::cout << "Diameter: " << diameter * diameter / 4 * PI << std::endl;
}
