// For Exercises 4.13–4.16, perform each of these steps:
// a) Read the problem statement.
// b) Formulate the algorithm using pseudo code and top-down, stepwise
// refinement.
// c) Write a C++ program.
// d) Test,debug and execute the C++ program.
//
// 4.15 (Sales Commission Calculator) A large company pays its salespeople on a
// commission basis. The salespeople each receive $200 per week plus 9% of their
// gross sales for that week. For example, a salesperson who sells $5000 worth
// of chemicals in a week receives $200 plus 9% of $5000, or a total of $650.
// Develop a C++ program that uses a while statement to input each salesperson's
// gross sales for last week and calculates and displays that salesperson's
// earnings. Process one salesperson's figures at a time.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// Algorithm:
//
// Prompt the user to enter sales. Input sales.
//
// while the user has not yet entered the sentinel
//   salary = 200 + 0.09 * sales
//   Print salary
//   Prompt the user to enter sales. Input sales.

#include <iostream>

int main() {
  double sales;

  std::cout << "Enter sales in dollars (-1 to end): ";
  std::cin >> sales;

  while (sales >= 0) {
    std::cout << "Salary is: " << (200 + 0.09 * sales) << std::endl;
    std::cout << std::endl;
    std::cout << "Enter sales in dollars (-1 to end): ";
    std::cin >> sales;
  }
}
