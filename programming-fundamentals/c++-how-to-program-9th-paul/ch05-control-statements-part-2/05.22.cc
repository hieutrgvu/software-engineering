// 5.22 (De Morgan's Laws) In this chapter, we discussed the logical operators
// &&, || and !. De Morgan's laws can sometimes make it more convenient for us
// to express a logical expression. These laws state that the expression
// !(condition1 && condition2) is logically equivalent to the expression
// (!condition1 || !condition2). Also, the expression !(condition1||condition2)
/// is logically equivalent to the expression (!condition1 && !condition2).
// Use De Morgan's laws to write equivalent expressions for each of the
// following, then write a program to show that the original expression and the
// new expression in each case are equivalent:
//
// a) !( x < 5 ) && !( y >= 7 )
// b) !( a == b ) || !( g != 5 )
// c) !( ( x <= 8 ) && ( y > 4 ) )
// d) !( ( i > 4 ) || ( j <= 6 ) )

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// a) !((x < 5) || (y >= 7))
// b) !((a == b) && (g != 5))
// c) !(x <= 8) || !(y > 4)
// d) !(i > 4) && !(j <= 6)

#include <iostream>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()

int main() {
  int x = rand();
  int y = rand();
  int a = rand();
  int b = rand();
  int g = rand();
  int i = rand();
  int j = rand();

  srand(time(0));  // Initialize random number generator.

  std::cout << std::boolalpha;
  std::cout << ((!((x < 5) || (y >= 7))) == (!(x < 5) && !(y >= 7)));
  std::cout << std::endl;
  std::cout << ((!((a == b) && (g != 5))) == (!(a == b) || !(g != 5)));
  std::cout << std::endl;
  std::cout << ((!(x <= 8) || !(y > 4)) == (!((x <= 8) && (y > 4))));
  std::cout << std::endl;
  std::cout << ((!(i > 4) && !(j <= 6)) == (!((i > 4) || (j <= 6))));
  std::cout << std::endl;
}
