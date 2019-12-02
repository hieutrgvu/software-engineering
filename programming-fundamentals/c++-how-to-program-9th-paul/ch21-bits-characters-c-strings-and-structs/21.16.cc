// 21.16 Write a program that inputs a line of text with istream member
// function getline (as in Chapter 15) into character array s[100]. Output
// the line in uppercase letters and lowercase letters.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <string>

int main() {
  char s[100];

  std::cout << "Input a string: ";
  std::cin.getline(s, 100);

  for (int i = 0; i < strlen(s); i++) {
    if (isupper(s[i])) std::cout << s[i] << ' ';
  }
  std::cout << std::endl;

  for (int i = 0; i < strlen(s); i++) {
    if (islower(s[i])) std::cout << s[i] << ' ';
  }
  std::cout << std::endl;

  return 0;
}
