// For Exercises 4.13–4.16, perform each of these steps:
// a) Read the problem statement.
// b) Formulate the algorithm using pseudo code and top-down, stepwise
// refinement.
// c) Write a C++ program.
// d) Test,debug and execute the C++ program.
//
// 4.16 (Salary Calculator) Develop a C++ program that uses a while statement
// to determine the gross pay for each of several employees. The company pays
// "straight time" for the first 40 hours worked by each employee and pays
// "time-and-a-half" for all hours worked in excess of 40 hours. You are given
// a list of the employees of the company, the number of hours each employee
// worked last week and the hourly rate of each employee. Your program should
// input this information for each employee and should determine and display
// the employee's gross pay.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// Algorithm:
//
// Prompt the user to enter hours worked. Input hours worked.
//
// while the user has not yet entered the sentinel
//   Prompt the user to enter hourly rate. Input hourly rate.
//
//   If hours worked are less than or equal to 40 hours
//     gross pay = hours * hourly rate;
//   else
//     gross pay = 40 * hourly rate + (hours - 40) * hourly rate * 1.5
//
//   Print gross pay
//   Prompt the user to enter hours worked. Input hours worked.

#include <iostream>

int main() {
  double hours_worked;
  double hourly_rate;
  double gross_pay;

  std::cout << "Enter hours worked (-1 to end): ";
  std::cin >> hours_worked;

  while (hours_worked >= 0) {
    std::cout << "Enter hourly rate of the employee ($00.00): ";
    std::cin >> hourly_rate;

    if (hours_worked <= 40) {
      gross_pay = hours_worked * hourly_rate;
    }
    else {
      gross_pay = 40 * hourly_rate + (hours_worked - 40) * hourly_rate * 1.5;
    }

    std::cout << "Salary is: " << gross_pay << std::endl;
    std::cout << std::endl;

    std::cout << "Enter hours worked (-1 to end): ";
    std::cin >> hours_worked;
  }
}
