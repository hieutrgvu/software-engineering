// 5.20 (Pythagorean Triples) A right triangle can have sides that are all
// integers. A set of three integer values for the sides of a right triangle is
// called a Pythagorean triple. These three sides must satisfy the relationship
// that the sum of the squares of two of the sides is equal to the square of
// the hypotenuse. Find all Pythagorean triples for side1, side2 and hypotenuse
// all no larger than 500. Use a triple-nested for loop that tries all
// possibilities. This is an example of brute force computing. You'll learn in
// more advanced computer science courses that there are many interesting
// problems for which there's no known algorithmic approach other than sheer
// brute force.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  for (int side_1 = 1; side_1 <= 500; ++side_1) {
    for (int side_2 = 1; side_2 <= 500; ++side_2) {
      int hypotenuse = side_1 > side_2 ? side_1 : side_2;
      for (; hypotenuse <= 500; ++hypotenuse) {
        if (side_1 * side_1 + side_2 * side_2 == hypotenuse * hypotenuse) {
          std::cout << "(" << side_1 << ", " << side_2 << ", "
            << hypotenuse << ")" << std::endl;
        }
      }
    }
  }
}
