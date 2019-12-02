// 21.26 (Displaying Characters for Given ASCII Codes) Write a program that
// inputs an ASCII code and prints the corresponding character. Modify this
// program so that it generates all possible three- digit codes in the range
// 000–255 and attempts to print the corresponding characters. What happens
// when this program is run?

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <iomanip>

int main() {
  int c;

  std::cout << "Input a character code (000-255):\n";
  std::cin >> c;
  std::cout << "The character is: " << (char)c << std::endl;

  for (int i = 0; i < 256; i++) {
    std::cout << std::setw(3) << std::setfill('0') << i << ": "
      << (char)i << std::endl;
  }

  return 0;
}
