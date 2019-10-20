// 4.17 (Find the Largest) The process of finding the largest number (i.e., the
// maximum of a group of numbers) is used frequently in computer applications.
// For example, a program that determines the winner of a sales contest inputs
// the number of units sold by each salesperson. The salesperson who sells the
// most units wins the contest. Write a C++ program that uses a while statement
// to determine and print the largest number of 10 numbers input by the user.
// Your program should use three variables, as follows:
//     counter:    A counter to count to 10 (i.e., to keep track of how many
//                 numbers have been input and to determine when all 10 numbers
//                 have been processed).
//     number:     The current number input to the program.
//     largest:    The largest number found so far.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int counter = 1;
  double number;
  double largest;

  std::cout << "Enter a number (1/10): ";
  std::cin >> number;
  largest = number;

  while (counter < 10) {
    std::cout << "Enter a number (" << ++counter << "/10): ";
    std::cin >> number;

    if (largest < number) {
      largest = number;
    }
  }

  std::cout << "The largest number is " << largest << std::endl;
}
