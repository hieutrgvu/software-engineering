// 6.29 (Prime Numbers) An integer is said to be prime if it’s divisible by
// only 1 and itself. For ex- ample, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9
// are not.
// a) Write a function that determines whether a number is prime.
// b) Use this function in a program that determines and prints all the prime
// numbers between 2 and 10,000. How many of these numbers do you really have
// to test before being sure that you’ve found all the primes?
// c) Initially, you might think that n/2 is the upper limit for which you must
// test to see whether a number is prime, but you need only go as high as the
// square root of n. Why? Rewrite the program, and run it both ways. Estimate
// the performance improvement.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// b. n/2
// c. We only need to scan to square of n because any composition number
// beyond this will already be crossed off.

#include <iostream>
#include <cmath>

bool IsPrime(int n) {
  if (n < 2) return false;

  for (int i = 2; i <= sqrt(n); i++) {
    if ((n % i) == 0) return false;
  }

  return true;
}

bool IsPrime(int n) {
  if (n < 2) return false;

  for (int i = 2; i <= (n / 2); i++) {
    if ((n % i) == 0) return false;
  }

  return true;
}

int main() {
  double n1;
  double n2;
  double n3;

  std::cout << "The perfect numbers in range 1 and 1000 are ";
  for (int i = 2; i < 10000; i++) {
    if (IsPrime(i)) std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
