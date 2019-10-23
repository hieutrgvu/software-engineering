// 5.29 (Peter Minuit Problem) Legend has it that, in 1626, Peter Minuit
// purchased Manhattan Island for $24.00 in barter. Did he make a good
// investment? To answer this question, modify the compound interest program
// of Fig. 5.6 to begin with a principal of $24.00 and to calculate the amount
// of interest on deposit if that money had been kept on deposit until this
// year (e.g., 384 years through 2010). Place the for loop that performs the
// compound interest calculation in an outer for loop that varies the interest
// rate from 5% to 10% to observe the wonders of compound interest.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <iomanip>
#include <math.h>

int main() {
  double amount;
  double principal = 24.0;

  std::cout << "Year" << std::setw(21) << "Amount on deposit" << std::endl;
  std::cout << std::fixed << std::setprecision(2);

  for (double rate = 0.05; rate <= 0.08; rate += 0.01) {
    std::cout << "Interest rate: " << rate << "%." << std::endl;
    for (int year = 1; year <= (2019 - 1626); year++) {
      amount = principal * pow(1.0 + rate, year);
      std::cout << std::setw(4) << year << std::setw(21) << amount << std::endl;
    }
    std::cout << std::endl;
  }
}
