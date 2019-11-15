// 6.14 (Rounding Numbers) Function floor can be used to round a number to a
// specific decimal place. The statement
//    y = floor( x * 10 + .5 ) / 10;
// rounds x to the tenths position (the first position to the right of the
// decimal point). The statement
//    y = floor( x * 100 + .5 ) / 100;
// rounds x to the hundredths position (the second position to the right of the
// decimal point). Write a program that defines four functions to round a number
// x in various ways:
// a) roundToInteger( number )
// b) roundToTenths( number )
// c) roundToHundredths( number )
// d) roundToThousandths( number )

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <cmath>

double RoundToInteger(double number);
double RoundToTenths(double number);
double RoundToHundredths(double number);
double RoundToThousandths(double number);

int main() {
  double n;

  std::cout << "Input a numbers: ";
  std::cin >> n;
  std::cout << "RoundToInteger: " << RoundToInteger(n) << std::endl;
  std::cout << "RoundToTenths: " << RoundToTenths(n) << std::endl;
  std::cout << "RoundToHundredths: " << RoundToHundredths(n) << std::endl;
  std::cout << "RoundToThousandths: " << RoundToThousandths(n) << std::endl;

  return 0;
}

double RoundToInteger(double number) {
  return floor(number + 0.5);
}

double RoundToTenths(double number) {
  return floor(number * 10 + 0.5) / 10;
}

double RoundToHundredths(double number) {
  return floor(number * 100 + 0.5) / 100;
}

double RoundToThousandths(double number) {
  return floor(number * 1000 + 0.5) / 1000;
}
