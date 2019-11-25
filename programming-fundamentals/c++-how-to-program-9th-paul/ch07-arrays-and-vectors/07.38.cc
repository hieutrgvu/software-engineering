// 7.38 (Salesperson Salary Ranges with vector) Use a vector of integers to
// solve the problem described in Exercise 7.10.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <vector>

int main() {
  const int num_of_ranges = 9;
  const int base_salary = 200;
  std::vector<int> salary(num_of_ranges);

  for (int i = 0; i < num_of_ranges; i++) {
    salary[i] = base_salary + (i + 2) * 9;
    std::cout << salary[i] << ' ';
  }

  std::cout << std::endl;

  return 0;
}
