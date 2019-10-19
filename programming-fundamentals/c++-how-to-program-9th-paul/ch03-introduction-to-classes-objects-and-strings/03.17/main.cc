#include <iostream>

#include "health_profile.h"

int main() {
  std::string first_name;
  std::string last_name;
  std::string gender;
  int month;
  int date;
  int year;
  int min_target;
  int max_target;
  int height;
  int weight;

  // Get input from user
  std::cout << "Input first name: ";
  std::cin >> first_name;
  std::cout << "Input last name: ";
  std::cin >> last_name;
  std::cout << "Input gender (male/female): ";
  std::cin >> gender;
  std::cout << "Input date of birth (e.g. 11 18 1996): ";
  std::cin >> month >> date >> year;
  std::cout << "Input height (inches): ";
  std::cin >> height;
  std::cout << "Input weight (pounds): ";
  std::cin >> weight;

  HealthProfile user(first_name, last_name, gender, month, date, year,
    height, weight);

  std::cout << std::endl;
  std::cout << user.first_name() << " " << user.last_name() << std::endl;
  std::cout << "Gender: " << user.gender() << std::endl;
  std::cout << "Date of birth: " << user.birth_month() << "/"
    << user.birth_date() << "/" << user.birth_year() << std::endl;
  std::cout << "Age: " << user.GetAge() << std::endl;
  std::cout << "Max heart rate: " << user.GetMaxHeartRate()
    << " bpm" << std::endl;
  user.GetTargetHeartRate(min_target, max_target);
  std::cout << "Target heart rate range: " << min_target << "-"
    << max_target << " bpm" << std::endl;
  std::cout << "BMI: " << user.GetBodyMassIndex() << std::endl;

  // BMI table
  std::cout << "\nBMI VALUES\n"
               "Underweight: less than 18.5\n"
               "Normal:      between 18.5 and 24.9\n"
               "Overweight:  between 25 and 29.9\n"
               "Obese:       30 or greater" << std::endl;
}
