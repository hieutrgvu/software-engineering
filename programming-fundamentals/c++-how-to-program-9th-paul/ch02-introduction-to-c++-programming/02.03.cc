// 2.3 Write a single C++ statement to accomplish each of the following (assume
// that using directives have not been used):
// a) Declare the variables c, thisIsAVariable, q76354 and number to be of type
// int.
// b) Prompt the user to enter an integer. End your prompting message with a
// colon (:) followed by a space and leave the cursor positioned after the
// space.
// c) Read an integer from the user at the keyboard and store it in integer
// variable age.
// d) If the variable number is not equal to 7, print "The variable number is
// not equal to 7".
// e) Print the message "This is a C++ program" on one line.
// f) Print the message "This is a C++ program" on two lines. End the first line
// with C++.
// g) Print the message "This is a C++ program" with each word on a separate
// line.
// h) Print the message "This is a C++ program". Separate each word from the
// next by a tab.

//******************************************************************************
// Resolved by: Hieu vu
//******************************************************************************

#include <iostream>

int main() {
  // a)
  int c, thisIsAVariable, q76354, number;

  // b)
  std::cout << "Enter an integer: ";

  // c)
  int age; std::cin >> age;

  // d)
  if (number != 7) std::cout << "The variable number is not equal to 7\n";

  // e)
  std::cout << "This is a C++ program\n";

  // f)
  std::cout << "This is a C++\nprogram\n";

  // g)
  std::cout << "This\nis\na\nC++\nprogram\n";

  // h)
  std::cout << "This\tis\ta\tC++\tprogram\n";

  return 0;
}
