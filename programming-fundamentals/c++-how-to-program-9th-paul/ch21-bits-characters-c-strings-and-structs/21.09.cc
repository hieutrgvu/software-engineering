// 21.9 (Unpacking Characters from Unsigned Integers) Using the right-shift
// operator, the bitwise AND operator and a mask, write function
// unpackCharacters that takes the unsigned integer from Exercise 21.8 and
// unpacks it into two characters. To unpack two characters from an unsigned
// two-byte integer, combine the unsigned integer with the mask 65280
// (11111111 00000000) and right-shift the result eight bits. Assign the
// resulting value to a char variable. Then, combine the unsigned integer with
// the mask 255 (00000000 11111111). Assign the result to another char
// variable. The program should print the unsigned integer in bits before it’s
// unpacked, then print the characters in bits to confirm that they were
// unpacked correctly.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <bitset>
#include <cstdint>

void unpackCharacters(uint16_t number, char &c1, char &c2) {
  c1 = (number >> 8) & 0x0ff;
  c2 = number & 0x0ff;
}

int main() {
  uint16_t number;
  char c1;
  char c2;

  std::cout << "Input a number: ";
  std::cin >> number;
  std::bitset<16> number_bit(number);
  std::cout << "Unpacking number: " << number_bit << std::endl;
  unpackCharacters(number, c1, c2);
  std::bitset<8> c1_bit(c1);
  std::bitset<8> c2_bit(c2);
  std::cout << "Character 1: " << c1_bit << std::endl;
  std::cout << "Character 2: " << c2_bit << std::endl;

  return 0;
}
