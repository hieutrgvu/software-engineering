// 2.5 Using the statements you wrote in Exercise 2.4, write a complete program
// that calculates and displays the product of three integers. Add comments to
// the code where appropriate. [Note: You'll need to write the necessary using
// directives.]

//******************************************************************************
// Resolved by: Hieu vu
//******************************************************************************

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Calculate the product of three integers.
int main() {
  // Declare variables.
  int x;
  int y;
  int z;
  int result;

  // Prompt the user to enter three integers.
  cout << "Enter three integers: ";

  // Read three integers from the keyboard and store them.
  cin >> x >> y >> z;

  // Compute the product of the three integers.
  result = x * y * z;

  // Show the result.
  cout << "The product is " << result << endl;

  // Indicating that the program terminated successfully.
  return 0;
}
