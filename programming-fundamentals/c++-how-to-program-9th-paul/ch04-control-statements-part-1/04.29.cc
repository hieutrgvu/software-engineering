// 4.29 (Multiples of 2 with an Infinite Loop) Write a program that prints the
// powers of the integer 2, namely 2, 4, 8, 16, 32, 64, etc. Your while loop
// should not terminate (i.e., you should create an infinite loop). To do this,
// simply use the keyword true as the expression for the while statement. What
// happens when you run this program?

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// This program will be never end.

#include <iostream>

int main() {
  int i = 1;

  while (true) {
    std::cout << i << std::endl;
    i *= 2;
  }
}
