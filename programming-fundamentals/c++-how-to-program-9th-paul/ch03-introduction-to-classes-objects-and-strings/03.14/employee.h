#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>

class Employee {
 public:
  Employee(std::string first_name, std::string last_name, int monthly_salary);

  // Mutator
  void set_first_name(std::string first_name);
  void set_last_name(std::string last_name);
  void set_monthly_salary(int monthly_salary);

  // Accessor
  std::string first_name() const { return first_name_; }
  std::string last_name() const { return last_name_; }
  int monthly_salary() const { return monthly_salary_; }

 private:
  std::string first_name_;
  std::string last_name_;
  int monthly_salary_;
};

#endif // EMPLOYEE_H_
