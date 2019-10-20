// For Exercises 4.13–4.16, perform each of these steps:
// a) Read the problem statement.
// b) Formulate the algorithm using pseudo code and top-down, stepwise
// refinement.
// c) Write a C++ program.
// d) Test,debug and execute the C++ program.
//
// 4.13 (Gas Mileage) Drivers are concerned with the mileage obtained by their
// automobiles. One driver has kept track of several trips by recording miles
// driven and gallons used for each trip. Develop a C++ program that uses a
// while statement to input the miles driven and gallons used for each trip.
// The program should calculate and display the miles per gallon obtained for
// each trip and print the combined miles per gallon obtained for all tankfuls
// up to this point.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// Algorithm:
//
// Prompt the user to enter miles driven
// Input miles driven
//
// while the user has not yet entered the sentinel
//   Prompt the user to enter gallons
//   Input gallons
//   Print miles per gallon
//   Add current miles to total miles
//   Add current gallons to total gallons
//   Print miles per gallon for all tankfuls
//   Prompt the user to enter miles driven
//   Input miles driven

#include <iostream>

int main() {
  int miles;
  int gallons;
  int total_miles = 0;
  int total_gallons = 0;

  std::cout << "Enter miles driven (-1 to quit): ";
  std::cin >> miles;

  while (miles >= 0) {
    std::cout << "Enter gallons used: ";
    std::cin >> gallons;

    if (gallons != 0) {
      std::cout << "MPG this trip: " << static_cast<double>(miles) / gallons
        << std::endl;
    }

    total_miles += miles;
    total_gallons += gallons;

    if (total_gallons != 0) {
      std::cout << "Total MPG: "
        << static_cast<double>(total_miles) / total_gallons << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Enter miles driven (-1 to quit): ";
    std::cin >> miles;
  }
}
