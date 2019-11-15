// 6.37 (Fibonacci Series) The Fibonacci series
//    0, 1, 1, 2, 3, 5, 8, 13, 21, ...
// begins with the terms 0 and 1 and has the property that each succeeding term
// is the sum of the two preceding terms. (a) Write a nonrecursive function
// fibonacci(n) that uses type int to calculate the nth Fibonacci number.
// (b) Determine the largest int Fibonacci number that can be printed on your
// system. Modify the program of part (a) to use double instead of int to
// calculate and return Fibo- nacci numbers, and use this modified program to
// repeat part (b).

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// Testing int version on MacBook Pro 2017. The largest Fibonacci number is
// 1836311903 (n = 46). Due to the MacBook Pro 2017 is 32-bit system, so
// the largest integer it can hold is 2147483647. The next Fibonacci (n = 47)
// will exceed 2147483647.

// With double version, the result is 1.30699e+308 (n = 1476)

#include <iostream>

int CalculateFibo(int n) {
  int next;
  int curr = 1;
  int prev = 0;

  if (n == 0) return 0;
  for (int i = 0; i < n - 1; i++) {
    next = curr + prev;
    prev = curr;
    curr = next;
  }

  return curr;
}

double CalculateFibo(double n) {
  double next;
  double curr = 1;
  double prev = 0;

  if (n == 0) return 0;
  for (int i = 0; i < n - 1; i++) {
    next = curr + prev;
    prev = curr;
    curr = next;
  }

  return curr;
}

int main() {
  // int n;
  double n;

  std::cout << "Input a number: ";
  std::cin >> n;
  std::cout << "fibo(" << n - 1 << ") = " << CalculateFibo(n - 1) << std::endl;
  std::cout << "fibo(" << n << ") = " << CalculateFibo(n) << std::endl;

  return 0;
}
