// 2.18 (Comparing Integers) Write a program that asks the user to enter two
// integers, obtains the numbers from the user, then prints the larger number
// followed by the words "is larger." If the numbers are equal, print the
// message "These numbers are equal."

//******************************************************************************
// Resolved by: Hieu vu
//******************************************************************************

#include <iostream>

int main() {
  int number_1;
  int number_2;
  std::cout << "Enter two integers: ";
  std::cin >> number_1 >> number_2;

  if (number_1 == number_2) {
    std::cout << "These numbers are equal." << std::endl;
  }
  else {
    int max = (number_1 > number_2) ? number_1 : number_2;
    std::cout << max << " is larger." << std::endl;
  }

  return 0;
}
