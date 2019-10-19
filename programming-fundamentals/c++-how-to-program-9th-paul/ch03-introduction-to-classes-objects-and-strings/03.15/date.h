#ifndef DATE_H_
#define DATE_H_

class Date {
 public:
  Date(int month, int date, int year);

  // Mutator
  void set_month(int month);
  void set_date(int date);
  void set_year(int year);

  // Accessor
  int month() const { return month_; }
  int date() const { return date_; }
  int year() const { return year_; }

  void DisplayDate();

 private:
  int month_;
  int date_;
  int year_;
};

#endif // DATE_H_
