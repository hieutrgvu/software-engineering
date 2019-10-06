// 2.29 (Table) Using the techniques of this chapter, write a program that
// calculates the squares and cubes of the integers from 0 to 10. Use tabs to
// print the following neatly formatted table of values:
//
// integer square cube
// 0       0       0
// 1.      1       1
// 2       4       8
// 3       9       27
// 4       16      64
// 5       25      125
// 6       36      216
// 7       49      343
// 8       64      512
// 9       81      729
// 10      100     1000

//******************************************************************************
// Resolved by: Hieu vu
//******************************************************************************

#include <iostream>

int main() {
  std::cout << "integer\tsquare\tcube" << std::endl;
  std::cout << "0\t0\t0" << std::endl;
  std::cout << "1\t1\t1" << std::endl;
  std::cout << "2\t4\t8" << std::endl;
  std::cout << "3\t9\t27" << std::endl;
  std::cout << "4\t16\t64" << std::endl;
  std::cout << "5\t25\t125" << std::endl;
  std::cout << "6\t36\t216" << std::endl;
  std::cout << "7\t49\t343" << std::endl;
  std::cout << "8\t64\t512" << std::endl;
  std::cout << "9\t81\t729" << std::endl;
  std::cout << "10\t100\t1000" << std::endl;

  return 0;
}
