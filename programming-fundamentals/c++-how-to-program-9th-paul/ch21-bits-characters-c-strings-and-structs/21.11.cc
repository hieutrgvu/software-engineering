// 21.11 (Unpacking Characters from Unsigned Integers) If your system uses
// four-byte integers, re- write the function unpackCharacters of Exercise 21.9
// to unpack four characters. Create the masks you need to unpack the four
// characters by left-shifting the value 255 in the mask variable by eight bits
// 0, 1, 2 or 3 times (depending on the byte you are unpacking).

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <bitset>
#include <cstdint>

void unpackCharacters(uint32_t number, char &c1, char &c2, char &c3, char &c4) {
  c1 = (number >> 24) & 0x0ff;
  c2 = (number >> 16) & 0x0ff;
  c3 = (number >> 8) & 0x0ff;
  c4 = number & 0x0ff;
}

int main() {
  uint32_t number;
  char c1;
  char c2;
  char c3;
  char c4;

  std::cout << "Input a number: ";
  std::cin >> number;
  std::bitset<32> number_bit(number);
  std::cout << "Unpacking number: " << number_bit << std::endl;
  unpackCharacters(number, c1, c2, c3, c4);
  std::bitset<8> c1_bit(c1);
  std::bitset<8> c2_bit(c2);
  std::bitset<8> c3_bit(c3);
  std::bitset<8> c4_bit(c4);
  std::cout << "Character 1: " << c1_bit << std::endl;
  std::cout << "Character 2: " << c2_bit << std::endl;
  std::cout << "Character 3: " << c3_bit << std::endl;
  std::cout << "Character 4: " << c4_bit << std::endl;

  return 0;
}
