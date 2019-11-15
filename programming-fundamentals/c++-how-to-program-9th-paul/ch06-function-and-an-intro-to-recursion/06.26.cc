// 6.26 (Celsius and Fahrenheit Temperatures) Implement the following integer
// functions:
// a) Function celsius returns the Celsius equivalent of a Fahrenheit
// temperature.
// b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius
// temperature.
// c) Use these functions to write a program that prints charts showing the
// Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees,
// and the Celsius equivalents of all Fahrenheit temperatures from 32 to 212
// degrees. Print the outputs in a neat tabular format that minimizes the
// number of lines of output while remaining readable.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <iomanip>

double ConvertToCelsius(double fahrenheit) {
  return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double ConvertToFahrenheit(double celsius) {
  return celsius * 9.0 / 5.0 + 32;
}

int main() {
  std::cout << std::setw(10) << "Celsius"
    << std::setw(15) << "Fahrenheit" << std::endl;

  for (int i = 0; i <= 100; i++) {
    std::cout << std::setw(10) << i
    << std::setw(15) << ConvertToFahrenheit(i) << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::setw(15) << "Fahrenheit"
    << std::setw(10) << "Celsius" << std::endl;

  for (int i = 32; i <= 212; i++) {
    std::cout << std::setw(15) << i
    << std::setw(10) << ConvertToCelsius(i) << std::endl;
  }

  return 0;
}
