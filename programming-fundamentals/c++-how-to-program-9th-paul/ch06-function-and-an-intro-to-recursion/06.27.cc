// 6.27 (Find the Minimum) Write a program that inputs three double-precision,
// floating-point numbers and passes them to a function that returns the
// smallest number.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

double FindMin(double n1, double n2, double n3) {
  if (n1 > n2) n1 = n2;
  return (n1 < n3) ? n1 : n2;
}

int main() {
  double n1;
  double n2;
  double n3;

  std::cout << "Input 3 number: ";
  std::cin >> n1 >> n2 >> n3;
  std::cout << "The minimum number is " << FindMin(n1, n2, n3) << std::endl;

  return 0;
}
