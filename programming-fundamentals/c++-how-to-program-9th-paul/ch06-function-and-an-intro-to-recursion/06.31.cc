// 6.31 (Greatest Common Divisor) The greatest common divisor (GCD) of two
// integers is the largest integer that evenly divides each of the numbers.
// Write a function gcd that returns the greatest com- mon divisor of two
// integers.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <cmath>

int FindGCD(int a, int b) {
  if (b == 0) return a;
  if (a == 0) return b;
  if (a >= b) return FindGCD(a - b, b);
  return FindGCD(a, b - a);
}

int main() {
  int n1, n2;

  std::cout << "Input 2 numbers: ";
  std::cin >> n1 >> n2;
  std::cout << "The GCD: " << FindGCD(n1, n2) << std::endl;

  return 0;
}
