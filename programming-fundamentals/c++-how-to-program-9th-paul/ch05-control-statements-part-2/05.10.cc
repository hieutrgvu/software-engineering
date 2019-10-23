// 5.10 (Factorials) The factorial function is used frequently in probability
// problems. Using the definition of factorial in Exercise 4.34, write a program
// that uses a for statement to evaluate the factorials of the integers from 1
// to 5. Print the results in tabular format. What difficulty might prevent you
// from calculating the factorial of 20?

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// The difficulty might be the overflow.

#include <iostream>
#include <iomanip>

int main() {
  int product = 1;

  std::cout << std::setw(5) << "Index"
    << std::setw(10) << "Factorial" << std::endl;
  for (int i = 1; i <= 20; i++) {
    product *= i;
    std::cout << std::setw(5) << i << std::setw(10) << product << std::endl;
  }

  return 0;
}
