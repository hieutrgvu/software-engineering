// 4.5 Combine the statements that you wrote in Exercise 4.4 into a program that
// calculates and prints the sum of the integers from 1 to 10. Use the while
// statement to loop through the calculation and increment statements. The loop
// should terminate when the value of x becomes 11.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int sum = 0;
  int count = 1;

  while (count < 10) {
    sum += count;
    count++;
  }

  std::cout << "The sum of the integers from 1 to 10: " << sum << std::endl;

  return 0;
}
