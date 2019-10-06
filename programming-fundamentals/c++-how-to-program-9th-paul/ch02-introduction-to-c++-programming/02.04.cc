// 2.4 Write a statement (or comment) to accomplish each of the following
// (assume that using directives have been used for cin, cout and endl):
// a) State that a program calculates the product of three integers.
// b) Declare the variables x, y, z and result to be of type int (in separate
// statements).
// c) Prompt the user to enter three integers.
// d) Read three integers from the keyboard and store them in the variables x,
// y and z.
// e) Compute the product of the three integers contained in variables x, y and
// z, and assign the result to the variable result.
// f) Print "The product is " followed by the value of the variable result.
// g) Return a value from main indicating that the program terminated
// successfully.

//******************************************************************************
// Resolved by: Hieu vu
//******************************************************************************

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// a)
// Calculate the product of three integers
int main() {
  // b)
  int x;
  int y;
  int z;
  int result;

  // c)
  cout << "Enter three integers: ";

  // d)
  cin >> x >> y >> z;

  // e)
  result = x * y * z;

  // f)
  cout << "The product is " << result << endl;

  // g)
  return 0;
}
