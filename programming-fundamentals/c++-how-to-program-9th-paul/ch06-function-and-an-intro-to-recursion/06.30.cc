// 6.30 (Reverse Digits) Write a function that takes an integer value and
// returns the number with its digits reversed. For example, given the number
// 7631, the function should return 1367.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// b. n/2
// c. We only need to scan to square of n because any composition number
// beyond this will already be crossed off.

#include <iostream>
#include <cmath>

int ReverseDigit(int n) {
  int reverse = 0;

  while (n != 0) {
    reverse = reverse * 10 + n % 10;
    n /= 10;
  }

  return reverse;
}

int main() {
  int number;

  std::cout << "Input a number:  ";
  std::cin >> number;
  std::cout << "The reversed number: " << ReverseDigit(number) << std::endl;

  return 0;
}
