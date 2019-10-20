// 4.26 (Palindromes) A palindrome is a number or a text phrase that reads the
// same backward as forward. For example, each of the following five-digit
// integers is a palindrome: 12321, 55555, 45554 and 11611. Write a program that
// reads in a five-digit integer and determines whether it's a palindrome.
// [Hint: Use the division and modulus operators to separate the number into
// its individual digits.]

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int number;
  int original;
  int inverse = 0;

  std::cout << "Enter a number: ";
  std::cin >> number;
  original = number;

  while (number != 0) {
    inverse = 10 * inverse + number % 10;
    number /= 10;
  }

  if (original == inverse) {
    std::cout << "It is a palindrome." << std::endl;
  }
  else {
    std::cout << "It is not a palindrome." << std::endl;
  }
}
