// 21.13 (Testing Characters with the <cctype> Functions) Write a program that
// inputs a character from the keyboard and tests the character with each
// function in the character-handling library. Print the value returned by
// each function.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <cctype>

int main() {
  char c;

  std::cout << "Input a character: ";
  std::cin >> c;

  std::cout << "\'" << c << "\' is "
    << (isdigit(c) ? "a" : "not a") << " digit.\n";

  std::cout << "\'" << c << "\' is "
    << (isalpha(c) ? "a" : "not a") << " letter.\n";

  std::cout << "\'" << c << "\' is "
    << (isalnum(c) ? "a" : "not a") << " digit or a letter.\n";

  std::cout << "\'" << c << "\' is "
    << (isxdigit(c) ? "a" : "not a") << " hexadecimal digit.\n";

  std::cout << "\'" << c << "\' is "
    << (islower(c) ? "a" : "not a") << " lower letter.\n";

  std::cout << "\'" << c << "\' is "
    << (isupper(c) ? "a" : "not a") << " upper letter.\n";

  std::cout << "\'" << c << "\' is "
    << (isspace(c) ? "a" : "not a") << " whitespace letter.\n";

  std::cout << "\'" << c << "\' is "
    << (iscntrl(c) ? "a" : "not a") << " control character.\n";

  std::cout << "\'" << c << "\' is "
    << (ispunct(c) ? "a" : "not a") << " punctuation character.\n";

  std::cout << "\'" << c << "\' is "
    << (isprint(c) ? "a" : "not a") << " printing character.\n";

  std::cout << "\'" << c << "\' is "
    << (isgraph(c) ? "a" : "not a") << " printing char other than a space.\n";

  return 0;
}
