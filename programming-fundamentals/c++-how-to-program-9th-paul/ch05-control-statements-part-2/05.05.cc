// 5.5 (Summing Integers) Write a program that uses a for statement to sum a
// sequence of integers. Assume that the first integer read specifies the
// number of values remaining to be entered. Your program should read only one
// value per input statement. A typical input sequence might be
//    5 100 200 300 400 500
// where the 5 indicates that the subsequent 5 values are to be summed.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int input_num;
  int temp;
  int sum = 0;

  std::cin >> input_num;

  for (int i = 0; i < input_num; i++) {
    std::cin >> temp;
    sum += temp;
  }

  std::cout << sum << std::endl;

  return 0;
}
