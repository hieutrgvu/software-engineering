// 6.12 (Parking Charges) A parking garage charges a $2.00 minimum fee to park
// for up to three hours. The garage charges an additional $0.50 per hour for
// each hour or part thereof in excess of three hours. The maximum charge for
// any given 24-hour period is $10.00. Assume that no car parks for longer than
// 24 hours at a time. Write a program that calculates and prints the parking
// charges for each of three customers who parked their cars in this garage
// yesterday. You should enter the hours parked for each customer. Your program
// should print the results in a neat tabular format and should calculate and
// print the total of yesterday’s receipts. The program should use the function
// calculateCharges to determine the charge for each customer. Your outputs
// should appear in the following format:

// Car      Hours     Charge
// 1          1.5       2.00
// 2          4.0       2.50
// 3         24.0      10.00
// TOTAL     29.5      14.50

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <iomanip>

double CalculateCharges(double hour_parked) {
  double charged;
  if (hour_parked <= 3) { return 2.0; }
  else {
    charged = 2.0 + 0.5 * (hour_parked - 3);
    if (charged > 10) return 10;
    else return charged;
  }
}

int main() {
  double hours_parked_1;
  double hours_parked_2;
  double hours_parked_3;
  double total_charged;

  std::cout << "Input hour parked of 3 cars: ";
  std::cin >> hours_parked_1 >> hours_parked_2 >> hours_parked_3;
  std::cout << std::setw(6) << std::left << "Car"
    << std::setw(8) << std::right << "Hours"
    << std::setw(10) << std::right << "Charge"
    << std::endl;

  std::cout << std::setw(6) << std::left << 1
    << std::setw(8) << std::right << hours_parked_1
    << std::setw(10) << std::right << CalculateCharges(hours_parked_1)
    << std::endl;

  std::cout << std::setw(6) << std::left << 2
    << std::setw(8) << std::right << hours_parked_2
    << std::setw(10) << std::right << CalculateCharges(hours_parked_2)
    << std::endl;

  std::cout << std::setw(6) << std::left << 3
    << std::setw(8) << std::right << hours_parked_3
    << std::setw(10) << std::right << CalculateCharges(hours_parked_3)
    << std::endl;

  total_charged = CalculateCharges(hours_parked_1) +
    CalculateCharges(hours_parked_2) +
    CalculateCharges(hours_parked_3);
  std::cout << std::setw(6) << std::left << "TOTAL"
    << std::setw(8) << std::right
    << hours_parked_1 + hours_parked_2 + hours_parked_3
    << std::setw(10) << std::right << total_charged
    << std::endl;

  return 0;
}
