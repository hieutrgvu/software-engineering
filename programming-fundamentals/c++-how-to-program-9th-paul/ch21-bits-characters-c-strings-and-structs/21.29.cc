// 21.29 (Write Your Own String Searching Functions) Write your own versions
// of the functions in Fig. 21.34 for searching strings.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// Example for strchr

#include <iostream>

char * SearchChar(char * s, char c) {
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == c) return &s[i];
  }

  return nullptr;
}

int main() {
  char s[100];
  char c;

  std::cout << "Input a string: ";
  std::cin >> s;
  std::cout << "Input a character: ";
  std::cin >> c;

  char * ptr = SearchChar(s, c);
  std::cout << "The string from first occurence of " << c << ": "
    << ((ptr != nullptr) ? ptr : "") << std::endl;

  return 0;
}
