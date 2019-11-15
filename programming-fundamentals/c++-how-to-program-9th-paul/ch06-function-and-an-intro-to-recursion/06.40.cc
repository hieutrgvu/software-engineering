// 6.40 (Visualizing Recursion) It’s interesting to watch recursion “in action.”
// Modify the factorial function of Fig. 6.29 to print its local variable and
// recursive call parameter. For each recursive call, display the outputs on a
// separate line and add a level of indentation. Do your utmost to make the
// outputs clear, interesting and meaningful. Your goal here is to design and
// implement an output for- mat that helps a person understand recursion better.
// You may want to add such display capabilities to the many other recursion
// examples and exercises throughout the text.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// Fig. 6.29: fig06_29.cpp
// Demonstrating the recursive function factorial.

#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial( unsigned long ); // function prototype

int main()
{
  // calculate the factorials of 0 through 10
  for ( int counter = 0; counter <= 10; ++counter )
    cout << setw( 2 ) << counter << "! = " << factorial( counter ) << endl;
}//endmain

// recursive definition of function factorial
unsigned long factorial( unsigned long number )
{
  static int indent = -1;
  long result;

  indent++;

  if ( number <= 1 ) // test for base case
    result = 1; // base cases: 0! = 1 and 1! = 1
  else // recursion step
    result = number * factorial( number - 1 );

  for (int i = 0; i < indent; i++) {
    cout << '\t';
  }
  cout << indent << ". factorial(" << number << ") = " << result << endl;
  indent--;

  return result;
} // end function factorial
