// 4.28 (Checkerboard Pattern of Asterisks) Write a program that displays the
// following checkerboard pattern. Your program must use only three output
// statements, one of each of the following forms:
//    cout << "* ";
//    cout << ' ';
//    cout << endl;
//
// * * * * * * * *
//  * * * * * * * *
// * * * * * * * *
//  * * * * * * * *
// * * * * * * * *
//  * * * * * * * *
// * * * * * * * *
//  * * * * * * * *

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int i = 0;
  int j;

  while (i < 8) {
    if ((i % 2) == 1) { std::cout << ' '; }

    j = 0;
    while (j++ < 8) { std::cout << "* "; }
    std::cout << std::endl;

    ++i;
  }
}
