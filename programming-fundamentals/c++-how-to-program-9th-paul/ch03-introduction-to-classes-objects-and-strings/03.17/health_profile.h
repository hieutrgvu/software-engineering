#ifndef HEALTH_PROFILE_H_
#define HEALTH_PROFILE_H_

#include <string>

class HealthProfile {
 public:
  HealthProfile(std::string first_name, std::string last_name,
    std::string gender, int birth_month, int birth_date, int birth_year,
    int height, int weight);

  // Mutator
  void set_first_name(std::string first_name);
  void set_last_name(std::string last_name);
  void set_gender(std::string gender);
  void set_birth_month(int birth_month);
  void set_birth_date(int birth_date);
  void set_birth_year(int birth_year);
  void set_height(int height);
  void set_weight(int weight);

  // Accessor
  std::string first_name() const { return first_name_; }
  std::string last_name() const { return last_name_; }
  std::string gender() const { return gender_; }
  int birth_month() const { return birth_month_; }
  int birth_date() const { return birth_date_; }
  int birth_year() const { return birth_year_; }
  int height() const { return height_; }
  int weight() const { return weight_; }

  int GetAge();
  int GetMaxHeartRate();
  void GetTargetHeartRate(int& min_target, int& max_target);
  float GetBodyMassIndex();

 private:
  std::string first_name_;
  std::string last_name_;
  std::string gender_;
  int birth_month_;
  int birth_date_;
  int birth_year_;
  int height_;
  int weight_;
};

#endif // HEALTH_PROFILE_H_
