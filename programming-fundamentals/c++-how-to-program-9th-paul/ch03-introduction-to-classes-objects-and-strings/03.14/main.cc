#include <iostream>

#include "employee.h"

int main() {
  Employee employee_1("John", "Porter", 100000);
  Employee employee_2("Anna", "Nguyen", -1000);

  // Current yearly salary
  std::cout << "Yearly salary of " << employee_1.first_name() << " "
    << employee_1.last_name() << ": "
    << 12 * employee_1.monthly_salary() << std::endl;

  std::cout << "Yearly salary of " << employee_2.first_name() << " "
    << employee_2.last_name() << ": "
    << 12 * employee_2.monthly_salary() << std::endl;

  // Increase salary by 10%
  employee_1.set_monthly_salary(1.1 * employee_1.monthly_salary());
  employee_2.set_monthly_salary(1.1 * employee_2.monthly_salary());

  // The next yearly salary
  std::cout << "The next yearly salary of " << employee_1.first_name() << " "
    << employee_1.last_name() << ": "
    << 12 * employee_1.monthly_salary() << std::endl;

  std::cout << "The next yearly salary of " << employee_2.first_name() << " "
    << employee_2.last_name() << ": "
    << 12 * employee_2.monthly_salary() << std::endl;
}
