#include "employee.h"

// Constructor
Employee::Employee(std::string first_name, std::string last_name,
  int monthly_salary) {
  set_first_name(first_name);
  set_last_name(last_name);
  set_monthly_salary(monthly_salary);
}

// Mutators
void Employee::set_first_name(std::string first_name) {
  first_name_ = first_name;
}

void Employee::set_last_name(std::string last_name) {
  last_name_ = last_name;
}

void Employee::set_monthly_salary(int monthly_salary) {
  if (monthly_salary > 0) {
    monthly_salary_ = monthly_salary;
  }
  else {
    monthly_salary_ = 0;
  }
}
