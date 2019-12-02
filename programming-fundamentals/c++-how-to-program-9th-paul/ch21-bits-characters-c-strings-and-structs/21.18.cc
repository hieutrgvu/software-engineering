// 21.18 (Converting Strings to Floating-Point Numbers) Write a program that
// inputs four strings that represent floating-point values, converts the
// strings to double values, sums the values and prints the total of the four
// values. Use only the C-style string-processing techniques shown in this
// chapter.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <string>

int main() {
  char s[4][100];

  std::cout << "Input 4 strings to convert to double: ";
  std::cin >> s[0] >> s[1] >> s[2] >> s[3];
  std::cout << "Sum: "<< atof(s[0]) + atof(s[1]) + atof(s[2]) + atof(s[3]);
  std::cout << std::endl;

  return 0;
}
