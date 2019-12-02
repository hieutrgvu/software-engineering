// 21.32 (Comparing Strings) Write a program that uses function strcmp to
// compare two strings input by the user. The program should state whether the
// first string is less than, equal to or greater than the second string.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <string>

int main() {
  char s[2][100] = {};

  std::cout << "Input string 1: ";
  std::cin >> s[0];
  std::cout << "Input string 2: ";
  std::cin >> s[1];

  int compare = strcmp(s[0], s[1]);
  std::cout << "String 1 is ";
  if (compare == 0) std::cout << "equal";
  else if (compare > 0) std::cout << "greater than";
  else std::cout << "lower than";
  std::cout << " String 2." << std::endl;

  return 0;
}
