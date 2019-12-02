// 21.28 (Write Your Own String Conversion Functions) Write your own versions
// of the functions in Fig. 21.27 for converting strings to numbers.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// Example for atoi

#include <iostream>

int ConvertToInt(char *s) {
  int number = 0;

  for (int i = 0; s[i] != '\0'; i++) {
    if ((s[i] >= '0') && (s[i] <= '9')) {
      number = number * 10 + (s[i] - '0');
    }
    else return 0;
  }

  return number;
}

int main() {
  char s[100];

  std::cout << "Input a string to convert to integer: ";
  std::cin >> s;
  std::cout << "The converted integer: " << ConvertToInt(s) << std::endl;

  return 0;
}
