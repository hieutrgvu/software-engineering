#include "heart_rates.h"

#include <ctime>

// Constructor
HeartRates::HeartRates(std::string first_name, std::string last_name,
  int birth_month, int birth_date, int birth_year) {
  set_first_name(first_name);
  set_last_name(last_name);
  set_birth_month(birth_month);
  set_birth_date(birth_date);
  set_birth_year(birth_year);
}

// Mutators
void HeartRates::set_first_name(std::string first_name) {
  first_name_ = first_name;
}

void HeartRates::set_last_name(std::string last_name) {
  last_name_ = last_name;
}

void HeartRates::set_birth_month(int birth_month) {
  if ((birth_month >= 1) && (birth_month <= 12)) {
    birth_month_ = birth_month;
  }
  else {
    birth_month_ = 1;
  }
}

void HeartRates::set_birth_date(int birth_date) { birth_date_ = birth_date; }
void HeartRates::set_birth_year(int birth_year) { birth_year_ = birth_year; }

int HeartRates::GetAge() {
  // get time now
  std::time_t t = std::time(0);
  std::tm* now = std::localtime(&t);

  return now->tm_year + 1900 - birth_year();
}

int HeartRates::GetMaxHeartRate() {
  return 220 - GetAge();
}

void HeartRates::GetTargetHeartRate(int& min_target, int& max_target) {
  int max_heart_rate = GetMaxHeartRate();
  min_target = max_heart_rate * 0.5;
  max_target = max_heart_rate * 0.85;
}
