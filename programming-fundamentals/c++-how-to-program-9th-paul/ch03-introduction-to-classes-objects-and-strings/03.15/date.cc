#include "date.h"

#include <iostream>

// Constructor
Date::Date(int month, int date, int year) {
  set_month(month);
  set_date(date);
  set_year(year);
}

// Mutators
void Date::set_month(int month) {
  if ((month >= 1) && (month <= 12)) {
    month_ = month;
  }
  else {
    month_ = 1;
  }
}

void Date::set_date(int date) {
  date_ = date;
}

void Date::set_year(int year) {
  year_ = year;
}

void Date::DisplayDate() {
  std::cout << month() << "/" << date() << "/" << year() << std::endl;
}
