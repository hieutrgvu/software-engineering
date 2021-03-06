// 6.3 Write a program that tests whether the examples of the math library
// function calls shown in Fig. 6.2 actually produce the indicated results.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <cmath>

int main() {
  std::cout << "ceil(" << 9.2 << ") = " << ceil(9.2) << std::endl;
  std::cout << "cos(" << 0.0 << ") = " << cos(0.0) << std::endl;
  std::cout << "exp(" << 1.0 << ") = " << exp(1.0) << std::endl;
  std::cout << "fabs(" << -8.76 << ") = " << fabs(-8.76) << std::endl;
  std::cout << "floor(" << 9.2 << ") = " << floor(9.2) << std::endl;
  std::cout << "fmod(" << 2.6 << ", " << 1.2 << ") = "
    << fmod(2.6, 1.2) << std::endl;
  std::cout << "log(" << 2.718282 << ") = " << log(2.718282) << std::endl;
  std::cout << "log10(" << 10.0 << ") = " << log10(10.0) << std::endl;
  std::cout << "pow(" << 2 << ", " << 7 << ") = "
    << pow(2, 7) << std::endl;
  std::cout << "sin(" << 0.0 << ") = " << sin(0.0) << std::endl;
  std::cout << "sqrt(" << 9.0 << ") = " << sqrt(9.0) << std::endl;
  std::cout << "tan(" << 0.0 << ") = " << tan(0.0) << std::endl;
  return 0;
}
