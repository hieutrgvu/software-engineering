// 21.12 (Reversing Bits) Write a program that reverses the order of the bits
// in an unsigned integer value. The program should input the value from the
// user and call function reverseBits to print the bits in reverse order. Print
// the value in bits both before and after the bits are reversed to confirm
// that the bits are reversed properly.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <bitset>

int reverseBits(int number) {
  int reverse = 0;

  for (int i = 0; i < sizeof(int) * 8; i++) {
    reverse <<= 1;
    reverse |= number & 0x01;
    number >>= 1;
  }

  return reverse;
}

int main() {
  int number;

  std::cout << "Input a number: ";
  std::cin >> number;
  std::bitset<sizeof(int) * 8> number_bit(number);
  std::cout << "Number in binary: " << number_bit << std::endl;
  std::bitset<sizeof(int) * 8> reverse_bit(reverseBits(number));
  std::cout << "Reversed number in binary: " << reverse_bit << std::endl;

  return 0;
}
