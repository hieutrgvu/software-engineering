// 21.7 (Multiplication Via Bit Shifting) Left-shifting an unsigned integer by
// one bit is equivalent to multiplying the value by 2. Write function power2
// that takes two integer arguments, number and pow, and calculates
//      number * 2^pow
// Use a shift operator to calculate the result. The program should print the
// values as integers and as bits.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <bitset>
#include <stdint.h>

int power2(int number, int pow) {
  return number << pow;
}

int main() {
  int number;
  int pow;

  std::cout << "Input number and pow: ";
  std::cin >> number >> pow;
  std::cout << "number * 2^pow = " << power2(number, pow) << std::endl;

  return 0;
}
