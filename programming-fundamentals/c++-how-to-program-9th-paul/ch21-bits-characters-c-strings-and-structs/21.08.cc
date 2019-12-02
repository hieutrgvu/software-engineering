// 21.8 (Packing Characters into Unsigned Integers) The left-shift operator can
// be used to pack two character values into a two-byte unsigned integer
// variable. Write a program that inputs two characters from the keyboard and
// passes them to function packCharacters. To pack two characters into an
// unsigned integer variable, assign the first character to the unsigned
// variable, shift the unsigned variable left by eight bit positions and
// combine the unsigned variable with the second character using the bitwise
// inclusive-OR operator. The program should output the characters in their
// bit format before and after they’re packed into the unsigned integer to
// prove that they’re in fact packed cor- rectly in the unsigned variable.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <bitset>
#include <cstdint>

uint16_t packCharacters(char c1, char c2) {
  return (((uint16_t)c1 << 8) & 0xff00) | (c2 & 0x0ff);
}

int main() {
  char c1;
  char c2;

  std::cout << "Input 2 characters: ";
  std::cin >> c1 >> c2;
  std::bitset<8> c1_bit(c1);
  std::bitset<8> c2_bit(c2);
  std::cout << "Character 1: " << c1_bit << std::endl;
  std::cout << "Character 2: " << c2_bit << std::endl;
  std::bitset<16> packed_bit(packCharacters(c1, c2));
  std::cout << "Packed: " << packed_bit << std::endl;

  return 0;
}
