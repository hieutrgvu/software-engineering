// 5.32 (Facebook User Base Growth) According to CNNMoney.com, Facebook hit 500
// million users in July of 2010 and its user base has been growing at a rate of
// 5% per month. Using the compound-growth technique you learned in Fig. 5.6 and
// assuming this growth rate continues, how many months will it take for
// Facebook to grow its user base to one billion users? How many months will it
// take for Facebook to grow its user base to two billion users (which, at the
// time of this writing, was the total number of people on the Internet)?

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  double rate = 0.05;
  double users_in_million = 500;
  int count = 0;
  int one_billion_month = 0;

  while (users_in_million < 2000.0) {
    users_in_million *= 1.0 + rate;
    count++;

    if ((users_in_million >= 1000.0) && (one_billion_month == 0)) {
      one_billion_month = count;
      std::cout << "After " << count << " months, FB has 1 billion users\n";
    }
  }

  std::cout << "After " << count << " months, FB has 2 billion users";
  std::cout << std::endl;
}
