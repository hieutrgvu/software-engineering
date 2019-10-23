// 5.31 (Tax Plan Alternatives; The “FairTax”) There are many proposals to make
// taxation fairer. Check out the FairTax initiative in the United States at
//    www.fairtax.org/site/PageServer?pagename=calculator
// Research how the proposed FairTax works. One suggestion is to eliminate
// income taxes and most other taxes in favor of a 23% consumption tax on all
// products and services that you buy. Some FairTax opponents question the 23%
// figure and say that because of the way the tax is calculated, it would be
// more accurate to say the rate is 30%—check this carefully. Write a program
// that prompts the user to enter expenses in various expense categories they
// have (e.g., housing, food, clothing, transportation, education, health care,
// vacations), then prints the estimated FairTax that person would pay.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  double amount;
  double total = 0;

  std::cout << "Fair tax calculation.\n"
    << "Here are some common expense categories:\n"
    << "1: Housing\n2: Food\n3: Clothing\n4: Transportation\n"
    << "5: Education\n6: Health care\n7: Vacation\n";

  for (int i = 1; i <= 7; i++) {
    std::cout << "Spending for category " << i << ": ";
    std::cin >> amount;
    total += amount;
  }

  std::cout << "Your fair tax would be $" << total * 0.3 << std::endl;
}
