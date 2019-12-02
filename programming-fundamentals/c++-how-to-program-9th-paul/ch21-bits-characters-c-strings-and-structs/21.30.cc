// 21.30 (Write Your Own Memory Handling Functions) Write your own versions of
// the functions in Fig. 21.41 for manipulating blocks of memory.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// Example for memcmp

#include <iostream>
#include <cstdint>

int CompareMem(void *m1, void *m2, int size) {
  uint8_t *mem1 = (uint8_t *)m1;
  uint8_t *mem2 = (uint8_t *)m2;

  for (int i = 0; i < size; i++) {
    if (mem1[i] > mem2[i]) return 1;
    else if (mem1[i] < mem2[i]) return -1;
  }

  return 0;
}

int main() {
  char s[2][100] = {};

  std::cout << "Input string 1: ";
  std::cin >> s[0];
  std::cout << "Input string 2: ";
  std::cin >> s[1];

  int compare = CompareMem(s[0], s[1], 100);
  std::cout << "String 1 is ";
  if (compare == 0) std::cout << "equal";
  else if (compare > 0) std::cout << "greater than";
  else std::cout << "lower than";
  std::cout << " String 2." << std::endl;

  return 0;
}
