// 6.10 Write a complete program that prompts the user for the radius of a
// sphere, and calculates and prints the volume of that sphere. Use an inline
// function sphereVolume that returns the result of the following expression:
// (4.0 / 3.0 * 3.14159 * pow(radius, 3)).


//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <cmath>

inline double sphereVolume(double radius) {
  return (4.0 / 3.0 * 3.14159 * pow(radius, 3));
}

int main() {
  double radius;
  std::cout << "Input shpere radius: ";
  std::cin >> radius;
  std::cout << "The shpere volume is " << sphereVolume(radius) << std::endl;
  return 0;
}
