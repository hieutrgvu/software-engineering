// 6.28 (Perfect Numbers) An integer is said to be a perfect number if the sum
// of its divisors, includ- ing 1 (but not the number itself), is equal to the
// number. For example, 6 is a perfect number, be- cause 6 = 1 + 2 + 3. Write
// a function isPerfect that determines whether parameter number is a perfect
// number. Use this function in a program that determines and prints all the
// perfect numbers between 1 and 1000. Print the divisors of each perfect
// number to confirm that the number is indeed perfect. Challenge the power of
// your computer by testing numbers much larger than 1000.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

bool IsPerfectNumber(int n) {
  int sum = 0;

  for (int i = 1; i <= (n / 2); i++) {
    if ((n % i) == 0) sum += i;
  }

  if (sum == n) return true;
  return false;
}

int main() {
  double n1;
  double n2;
  double n3;

  std::cout << "The perfect numbers in range 1 and 1000 are ";
  for (int i = 0; i < 1000; i++) {
    if (IsPerfectNumber(i)) std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
