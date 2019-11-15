// 6.25 (Calculating Number of Seconds) Write a function that takes the time as
// three integer arguments (hours, minutes and seconds) and returns the number
// of seconds since the last time the clock “struck 12.” Use this function to
// calculate the amount of time in seconds between two times, both of which are
// within one 12-hour cycle of the clock.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int ConvertToSec(int hours, int minutes, int seconds) {
  return hours * 60 * 60 + minutes * 60 + seconds;
}

int main() {
  int h;
  int m;
  int s;
  int total_sec;

  std::cout << "1. Input hours, minutes, seconds (e.g. 10 12 58): ";
  std::cin >> h >> m >> s;
  total_sec = ConvertToSec(h, m, s);
  std::cout << "The total seconds: " << total_sec << std::endl;
  std::cout << "\n2. Input hours, minutes, seconds (e.g. 10 13 34): ";
  std::cin >> h >> m >> s;
  std::cout << "The total seconds: " << ConvertToSec(h, m, s) << std::endl;
  std::cout << "\n3. Amount of time in seconds between two times: "
    << ConvertToSec(h, m, s) - total_sec << std::endl;

  return 0;
}
