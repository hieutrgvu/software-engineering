// 21.27 (Write Your Own Character Handling Functions) Using the ASCII
// character chart in Appendix B as a guide, write your own versions of the
// character-handling functions in Fig. 21.17.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// Example for isupper

#include <iostream>

bool IsUpper(char c) {
  return ((c >= 'A') && (c <= 'Z'));
}

int main() {
  std::cout << "\'a\' is "
    << (IsUpper('a') ? "an" : "not an") << " uppercase letter.\n";

  std::cout << "\'A\' is "
    << (IsUpper('A') ? "an" : "not an") << " uppercase letter.\n";

  return 0;
}
