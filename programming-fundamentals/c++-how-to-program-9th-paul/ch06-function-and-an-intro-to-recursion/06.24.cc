// 6.24 (Separating Digits) Write program segments that accomplish each of the
// following:
// a) Calculate the integer part of the quotient when integer a is divided by
// integer b.
// b) Calculate the integer remainder when integer a is divided by integer b.
// c) Use the program pieces developed in (a) and (b) to write a function that
// inputs an integer between 1 and 32767 and prints it as a series of digits,
// each pair of which is separated by two spaces. For example, the integer 4562
// should print as follows:
// 4  5  6  2

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int GetQuotient(int a, int b) {
  return a / b;
}

int GetRemainder(int a, int b) {
  return a % b;
}

void DisplayDigits(unsigned int number) {
  if (number == 0) return;
  DisplayDigits(GetQuotient(number, 10));
  std::cout << GetRemainder(number, 10) << "  ";
}

int main() {
  int n;

  std::cout << "Input a positive number: ";
  std::cin >> n;
  DisplayDigits(n);
  std::cout << std::endl;

  return 0;
}
