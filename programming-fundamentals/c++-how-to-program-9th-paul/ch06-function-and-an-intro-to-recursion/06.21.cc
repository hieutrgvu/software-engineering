// 6.21 (Even Numbers) Write a program that inputs a series of integers and
// passes them one at a time to function isEven, which uses the modulus operator
// to determine whether an integer is even. The function should take an integer
// argument and return true if the integer is even and false otherwise.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <iomanip>

bool IsEven(int number) {
  return ((number % 2) == 0);
}

int main() {
  int n;

  std::cout << std::boolalpha;
  for (int i = 0; i < 5; i++) {
    std::cout << "Input an integers (" << i + 1 << "/5): ";
    std::cin >> n;
    std::cout << IsEven(n) << std::endl;
  }

  return 0;
}
