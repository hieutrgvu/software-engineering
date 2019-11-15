// 6.46 After you determine what the program of Exercise 6.45 does, modify the
// program to function properly after removing the restriction that the second
// argument be nonnegative.


//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// Exercise 6.45: ex06_45.cpp
// What does this program do?
#include <iostream>
using namespace std;

int mystery( int, int ); // function prototype

int main()
{
  int x, y;

  cout << "Enter two integers: ";
  cin >> x >> y;
  cout << "The result is " << mystery( x, y ) << endl;
} // end main

// Parameter b must be a positive integer to prevent infinite recursion
int mystery( int a, int b )
{
  int sign = 1;

  if ( b < 0 ) {
    sign = -1;
    b = -b;
  }

  if ( b == 1 ) // base case
    return a;
  else // recursion step
    return sign * (a + mystery( a, b - 1 ));
} // end function mystery

