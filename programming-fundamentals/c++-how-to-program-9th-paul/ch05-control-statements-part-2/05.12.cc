// 5.12 (Drawing Patterns with Nested for Loops) Write a program that uses for
// statements to print the following patterns separately, one below the other.
// Use for loops to generate the patterns. All asterisks(*) should be printed
// by a single statement of the form cout << '*'; (this causes the asterisks to
// print side by side). [Hint: The last two patterns require that each line
// begin with an appropriate number of blanks. Extra credit: Combine your code
// from the four separate problems into a single program that prints all four
// patterns side by side by making clever use of nested for loops.]
//
//    a)              b)             c)             d)
// *              **********     **********              *
// **             *********       *********             **
// ***            ********         ********            ***
// ****           *******           *******           ****
// *****          ******             ******          *****
// ******         *****               *****         ******
// *******        ****                 ****        *******
// ********       ***                   ***       ********
// *********      **                     **      *********
// **********     *                       *     **********

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <iomanip>

int main() {
  int n;

  std::cout << "Input number of rows: ";
  std::cin >> n;

  // Scan all rows
  for (int i = 0; i < n; i++) {
    // Print triangle a
    for (int j = 0; j < n; j++) {
      if (j <= i) std::cout << '*';
      else std::cout << ' ';
    }

    // Print padding
    std::cout << std::setw(5) << ' ';

    // Print triangle b
    for (int j = 0; j < n; j++) {
      if (j < n - i) std::cout << '*';
      else std::cout << ' ';
    }

    // Print padding
    std::cout << std::setw(5) << ' ';

    // Print triangle c
    for (int j = 0; j < n; j++) {
      if (j >= i) std::cout << '*';
      else std::cout << ' ';
    }

    // Print padding
    std::cout << std::setw(5) << ' ';

    // Print triangle d
    for (int j = 0; j < n; j++) {
      if (j >= n - i - 1) std::cout << '*';
      else std::cout << ' ';
    }

    std::cout << std::endl;
  }

  return 0;
}
