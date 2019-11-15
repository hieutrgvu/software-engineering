// 6.20 (Multiples) Write a function multiple that determines for a pair of
// integers whether the second is a multiple of the first. The function
// should take two integer arguments and return true if the second is a
// multiple of the first, false otherwise. Use this function in a program that
// inputs a series of pairs of integers.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <iomanip>

bool CheckMultiple(int a, int b) {
  return ((b % a) == 0);
}

int main() {
  int a, b;

  std::cout << std::boolalpha;
  for (int i = 0; i < 5; i++) {
    std::cout << "Input a pairs of integers (" << i + 1 << "/5): ";
    std::cin >> a >> b;
    std::cout << CheckMultiple(a, b) << std::endl;
  }

  return 0;
}
