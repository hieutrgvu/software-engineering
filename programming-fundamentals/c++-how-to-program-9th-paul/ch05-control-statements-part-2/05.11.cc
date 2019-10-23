// 5.11 (Compound Interest) Modify the compound interest program of Section 5.4
// to repeat its steps for the interest rates 5%, 6%, 7%, 8%, 9% and 10%. Use a
// for statement to vary the interest rate.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
  double amount = 1000.0;  // amount on deposit at end of each year
  double rate = 0.05; // interest rate

  // display headers
  std::cout << "Year" << std::setw(21) << "Amount on deposit"
    << std::setw(15) << "Interest rate" << std::endl;

  // set floating-point number format
  std::cout << std::fixed << std::setprecision(2);

  // calculate amount on deposit for each of five years
  for (int year = 1; year <= 6; ++year) {
    // calculate new amount for specified year
    amount *= 1.0 + rate;

    // display the year, the amount and the interest rate
    std::cout << std::setw(4) << year << std::setw(21) << amount
      << std::setw(15) << rate << std::endl;

    rate += 0.01;
  }

  return 0;
}
