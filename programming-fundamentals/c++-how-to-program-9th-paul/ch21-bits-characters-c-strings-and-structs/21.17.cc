// 21.17 (Converting Strings to Integers) Write a program that inputs four
// strings that represent in- tegers, converts the strings to integers, sums
// the values and prints the total of the four values. Use only the C-style
// string-processing techniques shown in this chapter.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <string>

int main() {
  char s[4][100];

  std::cout << "Input 4 strings to convert to int: ";
  std::cin >> s[0] >> s[1] >> s[2] >> s[3];
  std::cout << "Sum: "<< atoi(s[0]) + atoi(s[1]) + atoi(s[2]) + atoi(s[3]);
  std::cout << std::endl;

  return 0;
}
