// 2.31 (Car-Pool Savings Calculator) Research several car-pooling websites.
// Create an application that calculates your daily driving cost, so that you
// can estimate how much money could be saved by car pooling, which also has
// other advantages such as reducing carbon emissions and reducing traffic
// congestion. The application should input the following information and
// display the user’s cost per day of driving to work:
// a) Total miles driven per day.
// b) Costpergallonofgasoline.
// c) Average miles per gallon.
// d) Parkingfeesperday.
// e) Tolls per day.

//******************************************************************************
// Resolved by: Hieu vu
//******************************************************************************

#include <iostream>

int main() {
  float miles, cost, average, parking, tolls, total_cost;

  std::cout << "Total miles driven per day: ";
  std::cin >> miles;
  std::cout << "Cost per gallon of gasoline: ";
  std::cin >> cost;
  std::cout << "Average miles per gallon: ";
  std::cin >> average;
  std::cout << "Parking fees per day: ";
  std::cin >> parking;
  std::cout << "Tolls per day: ";
  std::cin >> tolls;

  // Calculate total cost.
  total_cost = (miles/average) * cost + parking + tolls;

  std::cout << "\nTotal driving cost per day is: " << total_cost << std::endl;

  return 0;
}
