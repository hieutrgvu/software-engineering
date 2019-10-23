// 5.8 (Find the Smallest Integer) Write a program that uses a for statement to
// find the smallest of several integers. Assume that the first value read
// specifies the number of values remaining.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int input_num;
  int max;
  int temp;

  std::cin >> input_num;

  for (int i = 0; i < input_num; i++) {
    std::cin >> temp;
    if (max < temp) max = temp;
    else if (i == 0) max = temp;
  }

  if (input_num != 0) {
    std::cout << "The max number is " << max << std::endl;
  }
  else {
    std::cout << "No input number" << std::endl;
  }

  return 0;
}
