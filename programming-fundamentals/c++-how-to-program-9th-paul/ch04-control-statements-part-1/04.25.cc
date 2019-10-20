// 4.25 (Square of Asterisks) Write a program that reads in the size of the side
// of a square then prints a hollow square of that size out of asterisks and
// blanks. Your program should work for squares of all side sizes between 1 and
// 20. For example, if your program reads a size of 5, it should print
//
// *****
// *   *
// *   *
// *   *
// *****

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int size;
  int i;
  int j;

  std::cout << "Enter size of square side: ";
  std::cin >> size;

  i = 1;
  while (i <= size) {
    j = 1;
    while (j <= size) {
      if ((i == 1) || (i == size) || (j == 1) || (j == size)) {
        std::cout << "*";
      }
      else {
        std::cout << " ";
      }

      ++j;
    }
    ++i;
    std::cout << std::endl;
  }
}
