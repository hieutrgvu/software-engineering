// 2.23 (Largest and Smallest Integers) Write a program that reads in five
// integers and determines and prints the largest and the smallest integers in
// the group. Use only the programming techniques you learned in this chapter.

//******************************************************************************
// Resolved by: Hieu vu
//******************************************************************************

#include <iostream>

int main() {
  int number_1;
  int number_2;
  int number_3;
  int number_4;
  int number_5;

  std::cout << "Enter five integers: ";
  std::cin >> number_1 >> number_2 >> number_3 >> number_4 >> number_5;

  int min = number_1;
  if (min > number_2) min = number_2;
  if (min > number_3) min = number_3;
  if (min > number_4) min = number_4;
  if (min > number_5) min = number_5;
  std::cout << "Smallest is " << min << std::endl;

  int max = number_1;
  if (max < number_2) max = number_2;
  if (max < number_3) max = number_3;
  if (max < number_4) max = number_4;
  if (max < number_5) max = number_5;
  std::cout << "Largest is " << max << std::endl;

  return 0;
}
