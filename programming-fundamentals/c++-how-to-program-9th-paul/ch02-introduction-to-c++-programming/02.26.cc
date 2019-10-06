// 2.26 (Checkerboard Pattern) Display the following checkerboard pattern with
// eight output statements, then display the same pattern using as few
// statements as possible.
//
// * * * * * * * *
//. * * * * * * * *
// * * * * * * * *
//. * * * * * * * *
// * * * * * * * *
//. * * * * * * * *
// * * * * * * * *
//. * * * * * * * *

//******************************************************************************
// Resolved by: Hieu vu
//******************************************************************************

#include <iostream>

int main() {
  // Using 8 output statements.
  std::cout << "* * * * * * * *" << std::endl;
  std::cout << " * * * * * * * *" << std::endl;
  std::cout << "* * * * * * * *" << std::endl;
  std::cout << " * * * * * * * *" << std::endl;
  std::cout << "* * * * * * * *" << std::endl;
  std::cout << " * * * * * * * *" << std::endl;
  std::cout << "* * * * * * * *" << std::endl;
  std::cout << " * * * * * * * *" << std::endl;

  std::cout << std::endl;

  // Using 1 output statement.
  std::cout << "* * * * * * * *\n"
               " * * * * * * * *\n"
               "* * * * * * * *\n"
               " * * * * * * * *\n"
               "* * * * * * * *\n"
               " * * * * * * * *\n"
               "* * * * * * * *\n"
               " * * * * * * * *\n" << std::endl;

  return 0;
}
