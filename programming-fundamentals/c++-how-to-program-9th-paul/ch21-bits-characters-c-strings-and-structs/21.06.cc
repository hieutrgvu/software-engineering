// 21.6 (Shifting and Printing an Integer) Write a program that right-shifts an
// integer variable four bits. The program should print the integer in bits
// before and after the shift operation. Does your system place zeros or ones
// in the vacated bits?

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <bitset>
#include <stdint.h>

int main() {
  uint8_t number = -101;

  std::bitset<8> before_shift(number);
  std::cout << "Before shifting: " << before_shift << '\n';

  number >>= 4;
  std::bitset<8> after_shift(number);
  std::cout << "After shifting: " << after_shift << '\n';

  return 0;
}
