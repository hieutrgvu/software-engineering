// 7.32 (Palindromes) A palindrome is a string that is spelled the same way
// forward and backward. Examples of palindromes include “radar” and “able was
// i ere i saw elba.” Write a recursive function testPalindrome that returns
// true if a string is a palindrome, and false otherwise. Note that like an
// array, the square brackets ([]) operator can be used to iterate through the
// characters in a string.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

bool TestPalindrome(std::string s) {
  if ((s.size() == 1) || (s.size() == 0)) return true;
  if (s[0] != s[s.size() - 1]) { return false; }
  return TestPalindrome(s.substr(1, s.size() - 2));
}

int main() {
  std::string input;

  std::cout << "Input a string to test palindrome: ";
  std::getline(std::cin, input);

  if (TestPalindrome(input) == true)
    std::cout << "It is a palindrome" << std::endl;
  else
    std::cout << "It is not a palindrome" << std::endl;

  return 0;
}
