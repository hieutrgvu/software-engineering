// 6.53 (Function Template minimum) Write a program that uses a function
// template called minimum to determine the smaller of two arguments. Test the
// program using integer, character and floating- point number arguments.


//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <cmath>

template <typename T>
T GetMax(T arg_1, T arg_2) {
  return (arg_1 > arg_2) ? arg_1 : arg_2;
}

int main() {
  int int_1 = 1;
  int int_2 = 2;
  float float_1 = 10.43;
  float float_2 = 10.12;
  char char_1 = 'a';
  char char_2 = 'z';

  std::cout << "The minimum of " << int_1 << " and " << int_2 << " is "
    << GetMax(int_1, int_2) << std::endl;

  std::cout << "The minimum of " << float_1 << " and " << float_2 << " is "
    << GetMax(float_1, float_2) << std::endl;

  std::cout << "The minimum of " << char_1 << " and " << char_2 << " is "
    << GetMax(char_1, char_2) << std::endl;

  return 0;
}
