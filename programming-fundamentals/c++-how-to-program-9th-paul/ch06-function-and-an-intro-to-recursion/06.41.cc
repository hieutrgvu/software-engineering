// 6.41 (Recursive Greatest Common Divisor) The greatest common divisor of
// integers x and y is the largest integer that evenly divides both x and y.
// Write a recursive function gcd that returns the greatest common divisor of
// x and y, defined recursively as follows: If y is equal to 0,then gcd(x, y)
// is x; otherwise, gcd(x, y) is gcd(y, x % y), where % is the modulus operator.
// [Note:For this algorithm, x must be larger than y.]

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int FindGCD(int x, int y) {
  if (y == 0) return x;
  return FindGCD(y, x % y);
}

int main() {
  int n1, n2;

  std::cout << "Input 2 numbers x, y (x > y): ";
  std::cin >> n1 >> n2;
  std::cout << "The GCD: " << FindGCD(n1, n2) << std::endl;

  return 0;
}

