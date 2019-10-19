#include <iostream>

#include "account.h"

int main() {
  Account account_1(-10);
  Account account_2(200);

  account_1.Credit(10);
  std::cout << "Account 1: " << account_1.balance() << ".\n";

  account_2.Debit(150);
  std::cout << "Account 2 after debit: " << account_2.balance() << ".\n";
  account_2.Debit(100);
}
