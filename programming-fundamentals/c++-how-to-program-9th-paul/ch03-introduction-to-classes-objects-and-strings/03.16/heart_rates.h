#ifndef HEART_RATES_H_
#define HEART_RATES_H_

#include <string>

class HeartRates {
 public:
  HeartRates(std::string first_name, std::string last_name,
    int birth_month, int birth_date, int birth_year);

  // Mutator
  void set_first_name(std::string first_name);
  void set_last_name(std::string last_name);
  void set_birth_month(int birth_month);
  void set_birth_date(int birth_date);
  void set_birth_year(int birth_year);

  // Accessor
  std::string first_name() const { return first_name_; }
  std::string last_name() const { return last_name_; }
  int birth_month() const { return birth_month_; }
  int birth_date() const { return birth_date_; }
  int birth_year() const { return birth_year_; }

  int GetAge();
  int GetMaxHeartRate();
  void GetTargetHeartRate(int& min_target, int& max_target);

 private:
  std::string first_name_;
  std::string last_name_;
  int birth_month_;
  int birth_date_;
  int birth_year_;
};

#endif // HEART_RATES_H_
