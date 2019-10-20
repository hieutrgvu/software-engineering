// 4.18 (Tabular Output) Write a C++ program that uses a while statement and
// the tab escape sequence \t to print the following table of values:
//
// N     10*N    100*N   1000*N
// 1     10      100     1000
// 2     20      200     2000
// 3     30      300     3000
// 4     40      400     4000
// 5     50      500     5000

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int i = 1;

  std::cout << "N\t10*N\t100*N\t1000*N" << std::endl;

  while (i <= 5) {
    std::cout << i << "\t" << 10 * i << "\t" << 100 * i << "\t"
      << 1000 * i << std::endl;

    ++i;
  }
}
