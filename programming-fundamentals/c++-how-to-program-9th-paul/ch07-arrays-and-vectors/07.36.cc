// 7.36 (Print a String Backward) Write a recursive function stringReverse that
// takes a string and a starting subscript as arguments, prints the string
// backward and returns nothing. The function should stop processing and return
// when the end of the string is encountered. Note that like an array the
// square brackets ([]) operator can be used to iterate through the characters
// in a string.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

void PrintReverseString(char s[], int start) {
  if (s[start] == '\0') return;
  PrintReverseString(s, start + 1);
  std::cout << s[start];
}

int main() {
  char input[256];

  std::cout << "Input a string to test palindrome: ";
  std::cin.getline(input, sizeof(input));
  PrintReverseString(input, 0);
  std::cout << std::endl;

  return 0;
}
