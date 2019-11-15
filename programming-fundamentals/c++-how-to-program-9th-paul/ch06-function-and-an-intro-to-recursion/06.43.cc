// 6.43 (Distance Between Points) Write function distance that calculates the
// distance between two points (x1, y1) and (x2, y2). All numbers and return
// values should be of type double.


//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <cmath>

double CalculateDistance(double x1, double y1, double x2, double y2) {
  return sqrt((x1 - x2)* (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
  double x1;
  double y1;
  double x2;
  double y2;

  std::cout << "Input x1, y1: ";
  std::cin >> x1 >> y1;
  std::cout << "Input x2, y2: ";
  std::cin >> x2 >> y2;
  std::cout << "Distance: " << CalculateDistance(x1, y1, x2, y2) << std::endl;

  return 0;
}

