// 21.10 (Packing Characters into Unsigned Integers) If your system uses
// four-byte integers, rewrite the program of Exercise 21.8 to pack four
// characters.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <bitset>
#include <cstdint>

uint32_t packCharacters(char c1, char c2) {
  uint32_t number = c1;
  return (((uint16_t)number << 8) & 0xff00) | (c2 & 0x0ff);
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
  std::bitset<32> packed_bit(packCharacters(c1, c2));
  std::cout << "Packed: " << packed_bit << std::endl;

  return 0;
}
