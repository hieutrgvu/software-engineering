// 7.10 (Salesperson Salary Ranges) Use a one-dimensional array to solve the
// following problem. A company pays its salespeople on a commission basis.
// The salespeople each receive $200 per week plus 9 percent of their gross
// sales for that week. For example, a salesperson who grosses $5000 in sales
// in a week receives $200 plus 9 percent of $5000, or a total of $650. Write a
// program (using an array of counters) that determines how many of the
// salespeople earned salaries in each of the following ranges (assume that
// each salesperson’s salary is truncated to an integer amount):
// a) $200–299
// b) $300–399
// c) $400–499
// d) $500–599
// e) $600–699
// f) $700–799
// g) $800–899
// h) $900–999
// i) $1000 and over

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  const int num_of_ranges = 9;
  const int base_salary = 200;
  int salary[num_of_ranges];

  for (int i = 0; i < num_of_ranges; i++) {
    salary[i] = base_salary + (i + 2) * 9;
    std::cout << salary[i] << ' ';
  }

  std::cout << std::endl;

  return 0;
}
