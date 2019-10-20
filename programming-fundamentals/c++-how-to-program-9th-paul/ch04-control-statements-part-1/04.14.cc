// For Exercises 4.13–4.16, perform each of these steps:
// a) Read the problem statement.
// b) Formulate the algorithm using pseudo code and top-down, stepwise
// refinement.
// c) Write a C++ program.
// d) Test,debug and execute the C++ program.
//
// 4.14 (Credit Limits) Develop a C++ program that will determine whether a
// department-store customer has exceeded the credit limit on a charge account.
// For each customer, the following facts are available:
// a) Account number (an integer)
// b) Balance at the beginning of the month
// c) Total of all items charged by this customer this month
// d) Total of all credits applied to this customer's account this month
// e) Allowed credit limit
// The program should use a while statement to input each of these facts,
// calculate the new balance (= beginning balance + charges – credits) and
// determine whether the new balance exceeds the customer's credit limit. For
// those customers whose credit limit is exceeded, the program should display
// the customer's account number, credit limit, new balance and the message
// "Credit Limit Exceeded."

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// Algorithm:
//
// Prompt the user to enter account number. Input account number.
//
// while the user has not yet entered the sentinel
//   Prompt the user to enter beginning balance. Input beginning balance.
//   Prompt the user to enter total charges. Input total charges.
//   Prompt the user to enter total credits. Input total credits.
//   Prompt the user to enter credit limit. Input credit limit.
//   Calculate new balance.
//   Print new balance.
//   If new balance exceeds credit limit
//     Print account number
//     Print credit limit
//     Print new balance
//     Print "Credit Limit Exceeded."
//   Prompt the user to enter account number. Input account number.

#include <iostream>

int main() {
  int account_number;
  double begin_balance;
  double total_charges;
  double total_credits;
  double credit_limit;
  double new_balance;

  std::cout << "Enter account number (or -1 to quit): ";
  std::cin >> account_number;

  while (account_number > 0) {
    std::cout << "Enter beginning balance: ";
    std::cin >> begin_balance;
    std::cout << "Enter total charges: ";
    std::cin >> total_charges;
    std::cout << "Enter total credits: ";
    std::cin >> total_credits;
    std::cout << "Enter credit limit: ";
    std::cin >> credit_limit;

    new_balance = begin_balance + total_charges - total_credits;
    std::cout << "New balance is " << new_balance << std::endl;

    if (new_balance > credit_limit) {
      std::cout << std::endl;
      std::cout << "Account: " << account_number << "\n";
      std::cout << "Credit limit: " << credit_limit << "\n";
      std::cout << "Balance: " << new_balance << "\n";
      std::cout << "Credit Limit Exceeded." << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Enter account number (or -1 to quit): ";
    std::cin >> account_number;
  }
}
