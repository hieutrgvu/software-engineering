// 2.19 (Arithmetic, Smallest and Largest) Write a program that inputs three
// integers from the keyboard and prints the sum, average, product, smallest
// and largest of these numbers. The screen dialog should appear as follows:
//
// Input three different integers: 13 27 14
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27

//******************************************************************************
// Resolved by: Hieu vu
//******************************************************************************

#include <iostream>

int main() {
  int number_1;
  int number_2;
  int number_3;

  std::cout << "Enter three numbers: ";
  std::cin >> number_1 >> number_2 >> number_3;

  int sum = number_1 + number_2 + number_3;
  std::cout << "Sum is " << sum << std::endl;
  std::cout << "Average is " << sum / 3 << std::endl;
  std::cout << "Product is " << number_1 * number_2 * number_3 << std::endl;

  int min = number_1;
  if (min > number_2) min = number_2;
  if (min > number_3) min = number_3;
  std::cout << "Smallest is " << min << std::endl;

  int max = number_1;
  if (max < number_2) max = number_2;
  if (max < number_3) max = number_3;
  std::cout << "Largest is " << max << std::endl;

  return 0;
}
