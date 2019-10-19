#include "health_profile.h"

#include <ctime>

// Constructor
HealthProfile::HealthProfile(std::string first_name, std::string last_name,
  std::string gender, int birth_month, int birth_date, int birth_year,
  int height, int weight) {
  set_first_name(first_name);
  set_last_name(last_name);
  set_gender(gender);
  set_birth_month(birth_month);
  set_birth_date(birth_date);
  set_birth_year(birth_year);
  set_height(height);
  set_weight(weight);
}

// Mutators
void HealthProfile::set_first_name(std::string first_name) {
  first_name_ = first_name;
}

void HealthProfile::set_last_name(std::string last_name) {
  last_name_ = last_name;
}

void HealthProfile::set_gender(std::string gender) {
  gender_ = gender;
}

void HealthProfile::set_birth_month(int birth_month) {
  if ((birth_month >= 1) && (birth_month <= 12)) {
    birth_month_ = birth_month;
  }
  else {
    birth_month_ = 1;
  }
}

void HealthProfile::set_birth_date(int birth_date) { birth_date_ = birth_date; }
void HealthProfile::set_birth_year(int birth_year) { birth_year_ = birth_year; }
void HealthProfile::set_height(int height) { height_ = height; }
void HealthProfile::set_weight(int weight) { weight_ = weight; }

int HealthProfile::GetAge() {
  // get time now
  std::time_t t = std::time(0);
  std::tm* now = std::localtime(&t);

  return now->tm_year + 1900 - birth_year();
}

int HealthProfile::GetMaxHeartRate() {
  return 220 - GetAge();
}

void HealthProfile::GetTargetHeartRate(int& min_target, int& max_target) {
  int max_heart_rate = GetMaxHeartRate();
  min_target = max_heart_rate * 0.5;
  max_target = max_heart_rate * 0.85;
}

float HealthProfile::GetBodyMassIndex() {
  return (float)weight() * 203 / height() / height();
}
