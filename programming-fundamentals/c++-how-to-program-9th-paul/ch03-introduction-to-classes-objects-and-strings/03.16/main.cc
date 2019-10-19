#include <iostream>

#include "heart_rates.h"

int main() {
  std::string first_name;
  std::string last_name;
  int month;
  int date;
  int year;
  int min_target;
  int max_target;

  std::cout << "Input first name: ";
  std::cin >> first_name;
  std::cout << "Input last name: ";
  std::cin >> last_name;
  std::cout << "Input date of birth (e.g. 11 18 1996): ";
  std::cin >> month >> date >> year;

  HeartRates user(first_name, last_name, month, date, year);

  std::cout << std::endl;
  std::cout << user.first_name() << " " << user.last_name() << std::endl;
  std::cout << "Date of birth: " << user.birth_month() << "/"
    << user.birth_date() << "/" << user.birth_year() << std::endl;
  std::cout << "Age: " << user.GetAge() << std::endl;
  std::cout << "Max heart rate: " << user.GetMaxHeartRate()
    << " bpm" << std::endl;
  user.GetTargetHeartRate(min_target, max_target);
  std::cout << "Target heart rate range: " << min_target << "-"
    << max_target << " bpm" << std::endl;
}
