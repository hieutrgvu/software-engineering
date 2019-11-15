// 6.13 (Rounding Numbers) An application of function floor is rounding a value
// to the nearest integer. The statement
//    y = floor( x + .5 );
// rounds the number x to the nearest integer and assigns the result to y.
// Write a program that reads several numbers and uses the preceding statement
// to round each of these numbers to the nearest integer. For each number
// processed, print both the original number and the rounded number.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <cmath>

int main() {
  double number;

  std::cout << "Input 5 numbers: ";

  for (int i = 0; i < 5; i++) {
    std::cin >> number;
    std::cout << "The nearest of " << number << " is "
    << floor(number + 0.5) << std::endl;
  }

  return 0;
}
