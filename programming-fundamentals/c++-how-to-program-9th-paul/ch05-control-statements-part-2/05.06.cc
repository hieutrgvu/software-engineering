// 5.6 (Averaging Integers) Write a program that uses a for statement to
// calculate the average of several integers. Assume the last value read is the
// sentinel 9999. For example, the sequence 10 8 11 7 9 9999 indicates that the
// program should calculate the average of all the values preceding 9999.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int num = 0;
  int sum = 0;
  int count = -1;

  for (; num != 9999;) {
    sum += num;
    count++;
    std::cin >> num;
  }

  if (count != 0) {
    std::cout << "The average of all the values preceding 9999: "
    << static_cast<double>(sum) / count << std::endl;
  }
  else {
    std::cout << "No values preceding 9999" << std::endl;
  }

  return 0;
}
