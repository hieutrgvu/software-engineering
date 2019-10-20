// 4.19 (Find the Two Largest Numbers) Using an approach similar to that in
// Exercise 4.17, find the two largest values among the 10 numbers. [Note: You
// must input each number only once.]

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int counter = 1;
  double number;
  double largest;
  double second_largest;

  std::cout << "Enter a number (1/10): ";
  std::cin >> number;
  largest = number;
  second_largest = number;

  while (counter < 10) {
    std::cout << "Enter a number (" << ++counter << "/10): ";
    std::cin >> number;

    if (largest < number) {
      second_largest = largest;
      largest = number;
    }
  }

  std::cout << "The largest number is " << largest << std::endl;
  std::cout << "The second largest number is " << second_largest << std::endl;
}
