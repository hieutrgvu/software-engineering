#include "account.h"

#include <iostream>

Account::Account(int balance) {
  if (balance >= 0) {
    balance_ = balance;
  }
  else {
    balance_ = 0;
    std::cout << "Invalid balance (<0)!";
  }
}

void Account::Credit(int amount) {
  balance_ += amount;
}

void Account::Debit(int amount) {
  if (amount > balance_) {
    std::cout << "Debit amount exceeded account balance." << std::endl;
  }
  else {
    balance_ -= amount;
  }
}
