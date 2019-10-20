// 4.34 (Factorial) The factorial of a nonnegative integer n is written n!
// (pronounced "n factorial") and is defined as follows:
//    n! = n * (n-1) * (n-2) * ... * 1 (for values of n greater than 1)
// and
//    n! = 1 (for n = 0 or n = 1)
// For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120. Use while statements in
// each of the following:
//
// a) Write a program that reads a nonnegative integer and computes and prints
// its factorial.
//
// b) Write a program that estimates the value of the mathematical constant e
// by using the formula:
//          1      1      1
// e = 1 + ---- + ---- + ---- + ...
//          1!     2!     3!
// Prompt the user for the desired accuracy of e (i.e., the number of terms in
// the summation).
//
// c) Write a program that computes the value of e^x by using the formula
//             x      x^2     x^3
// e^x = 1 + ----- + ----- + ---- + ...
//            1!      2!      3!
// Prompt the user for the desired accuracy of e (i.e., the number of terms in
// the summation).

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int n;
  int i;
  double factorial;
  double e;
  double x;
  double product;

  // a)
  std::cout << "Enter a nonnegative integer: ";
  std::cin >> n;
  i = n;
  factorial = 1;
  while (i > 1) {
    factorial *= i;
    --i;
  }
  std::cout << n << "! = " << factorial << std::endl;

  // b)
  std::cout << "Enter number of terms in the summation of e: ";
  std::cin >> n;
  i = 1;
  factorial = 1;
  e = 1;
  while (i < n) {
    factorial *= i++;
    e += 1 / static_cast<double>(factorial);
  }
  std::cout << "e = " << e << std::endl;

  // c)
  std::cout << "Enter number of terms in the summation of e^x: ";
  std::cin >> n;
  std::cout << "Enter x: ";
  std::cin >> x;
  product = 1;
  i = 1;
  factorial = 1;
  e = 1;
  while (i < n) {
    product *= x;
    factorial *= i++;
    e += product / factorial;
  }
  std::cout << "e = " << e << std::endl;
}
