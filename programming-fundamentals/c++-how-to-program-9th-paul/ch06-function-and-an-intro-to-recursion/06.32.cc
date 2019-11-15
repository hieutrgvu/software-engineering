// 6.32 (Quality Points for Numeric Grades) Write a function qualityPoints that
// inputs a student’s average and returns 4 if a student’s average is 90–100,
// 3 if the average is 80–89, 2 if the av- erage is 70–79, 1 if the average is
// 60–69 and 0 if the average is lower than 60.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <cmath>

int QualifyPoint(int point) {
  if (point < 60) return 0;
  return point / 10 - 6;
}

int main() {
  int point;

  while (true) {
    std::cout << "Input student's point or -1 to quit: ";
    std::cin >> point;
    if (point < 0) break;
    std::cout << "Quality: " << QualifyPoint(point) << std::endl;
  }

  return 0;
}
