// 5.16 (Compound Interest Calculation) Modify Fig. 5.6 so it uses only integers
// to calculate the compound interest. [Hint: Treat all monetary amounts
// as numbers of pennies. Then "break" the result into its dollar and cents
// portions by using the division and modulus operations. Insert a period.]

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
  int amount_cent = 100000;

  // Display header
  std::cout << "Year" << std::setw(21) << "Amount of deposit" << std::endl;

  // Calculate amount on deposit for each of ten years
  for (int year = 1; year <= 10; ++year) {
    amount_cent = amount_cent * 105 / 100;
    std::cout << std::setw(4) << std::setfill(' ') << year
      << std::setw(18) << std::setfill(' ') << amount_cent / 100 << '.'
      << std::setw(2) << std::setfill('0') << amount_cent % 100 << std::endl;
  }
}
