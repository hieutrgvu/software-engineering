// 5.21 (Calculating Salaries) A company pays its employees as managers (who
// receive a fixed weekly salary), hourly workers (who receive a fixed hourly
// wage for up to the first 40 hours they work and "time-and-a-half"—1.5 times
// their hourly wage—for overtime hours worked), commission workers (who receive
// $250 plus 5.7 percent of their gross weekly sales), or pieceworkers (who
// receive a fixed amount of money per item for each of the items they produce—
// each pieceworker in this company works on only one type of item). Write a
// program to compute the weekly pay for each employee. You do not know the
// number of employees in advance. Each type of employee has its own pay code:
// Managers have code 1, hourly workers have code 2, commission workers have
// code 3 and pieceworkers have code 4. Use a switch to compute each employee's
// pay according to that employee's paycode. Within the switch, prompt the user
// (i.e., the payroll clerk) to enter the appropriate facts your program needs
// to calculate each employee's pay according to that employee's paycode.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int pay_code;
  double manager_salary;
  double hourly_worker_scale;
  double hour_worked;
  double commission_worker_sales;
  double salary_per_item;
  int item;

  std::cout << "Enter pay code or -1 to exit: ";
  std::cin >> pay_code;

  while (pay_code > 0) {
    switch (pay_code) {
      case 1:
        std::cout << "Enter manager weekly salary ($): ";
        std::cin >> manager_salary;
        std::cout << "Manager weekly salary is $" << manager_salary
          << std::endl;
        break;
      case 2:
        std::cout << "Enter hourly worker $/hours: ";
        std::cin >> hourly_worker_scale;
        std::cout << "Enter the hour worked: ";
        std::cin >> hour_worked;
        std::cout << "Hourly worker salary is $";
        if (hour_worked > 40) {
          std::cout << 40 * hourly_worker_scale +
            (hour_worked - 40) * hourly_worker_scale * 1.5 << std::endl;
        }
        else {
          std::cout << (hour_worked - 40) * hourly_worker_scale << std::endl;
        }
      case 3:
        std::cout << "Enter commission worker sales ($): ";
        std::cin >> commission_worker_sales;
        std::cout << "Commission worker salary is $"
          << 250 + 0.057 * commission_worker_sales << std::endl;
        break;
      case 4:
        std::cout << "Enter pieceworkers $/item: ";
        std::cin >> salary_per_item;
        std::cout << "Enter item done: ";
        std::cin >> item;
        std::cout << "Pieceworkers salary is $"
          << salary_per_item * item << std::endl;
        break;
      default:
        std::cout << "Invalid pay code." << std::endl;
        break;
    }

    std::cout << "Enter pay code or -1 to exit: ";
    std::cin >> pay_code;
  }
}
