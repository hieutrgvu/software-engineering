// 2.24 (Odd or Even) Write a program that reads an integer and determines and
// prints whether it's odd or even. [Hint: Use the modulus operator. An even
// number is a multiple of two. Any multiple of two leaves a remainder of zero
// when divided by 2.]

//******************************************************************************
// Resolved by: Hieu vu
//******************************************************************************

#include <iostream>

int main() {
  int number;

  std::cout << "Enter an integer: ";
  std::cin >> number;

  if ((number % 2) == 0) {
    std::cout << number << " is even." << std::endl;
  }
  else {
    std::cout << number << " is odd." << std::endl;
  }

  return 0;
}
