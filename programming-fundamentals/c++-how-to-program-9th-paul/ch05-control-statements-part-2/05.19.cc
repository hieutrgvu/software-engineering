// 5.19 (Calculating π) Calculate the value of π from the infinite series
//           4     4     4     4
// pi = 4 - --- + --- - --- + --- + ...
//           3     5     7     9
// Print a table that shows the approximate value of π after each of the first
// 1000 terms of this series

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  double pi = 0;
  double sum = 1;

  for (int i = 1; ; i++) {
    if (i % 2 == 1) pi += 4.0 / sum;
    else pi -= 4.0 / sum;

    if (i % 1000 == 0) std::cout << std::fixed << pi << std::endl;

    sum += 2;
  }
}
