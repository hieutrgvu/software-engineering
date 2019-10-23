// 5.27 (Removing the continue Statement) Describe in general how you'd remove
// any continue statement from a loop in a program and replace it with some
// structured equivalent. Use the technique you developed here to remove the
// continue statement from the program of Fig. 5.14.
//
// 1   // Fig. 5.14: fig05_14.cpp
// 2   // continue statement terminating an iteration of a for statement.
// 3   #include <iostream>
// 4   using namespace std;
// 5
// 6   int main()
// 7   {
// 8     for ( int count = 1; count <= 10; ++count ) // loop 10 times
// 9     {
// 10      if ( count == 5 ) // if count is 5,
// 11        continue;       // skip remaining code in loop
// 12
// 13      cout << count << " ";
// 14    } // end for
// 15
// 16    cout << "\nUsed continue to skip printing 5" << endl;
// 17  } // end main

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// A loop can be rewritten without a continue statement by moving all the code
// that appears in the body of the loop after the continue statement to an if
// statement that tests for the opposite of the continue condition. Thus, the
// code that was originally after the continue statement executes only when the
// if statement's conditional expression is true (i.e., the "continue" condition
// is false). When the "continue" condition is true, the body of the if does not
// execute and the program "continues" to the next iteration of the loop by not
// executing the remaining code in the loop's body.

#include <iostream>

int main() {
  int count;


  for (count = 1; (count <= 10); ++count) {
    if (count != 5) std::cout << count << " ";
  }

  std::cout << "\nUsed continue to skip printing 5" << std::endl;
}
