// 5.13 (Bar Chart) One interesting application of computers is drawing graphs
// and bar charts. Write a program that reads five numbers (each between 1 and
// 30). Assume that the user enters only valid values. For each number that is
// read, your program should print a line containing that number of adjacent
// asterisks. For example, if your program reads the number 7, it should print
// *******.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int n;

  std::cout << "Input 5 numbers: ";

  for (int i = 0; i < 5; i++) {
    std::cin >> n;
    for (int j = 0; j < n; j++) std::cout << "*";
    std::cout << std::endl;
  }

  return 0;
}
