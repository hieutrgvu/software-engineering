// 6.42 (Recursive main) Can main be called recursively on your system? Write a
// program containing a function main. Include static local variable count and
// initialize it to 1. Postincrement and print the value of count each time
// main is called. Compile your program. What happens?

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// [Note: Although many compilers allow function main to call itself, Section
// 3.6.1, paragraph 3, and Section 5.2.2, paragraph 9, of the C++ standard
// document indicate that main should not be called within a program or
// recursively. Its sole purpose is to be the starting point for program
// execution.]

// This program can still be built. It prints a lot of lines before terminated
// by OS.

#include <iostream>

int main() {
  static int count = 1;

  std::cout << count << std::endl;
  count++;
  main();

  return 0;
}

