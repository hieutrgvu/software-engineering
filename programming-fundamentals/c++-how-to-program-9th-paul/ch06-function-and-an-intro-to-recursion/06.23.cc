// 6.23 (Square of Any Character) Modify the function created in Exercise 6.22
// to form the square out of whatever character is contained in character
// parameter fillCharacter. Thus, if side is 5 and fillCharacter is #, then
// this function should print the following:
// #####
// #####
// #####
// #####
// #####

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

void DisplayCharSquare(int side, char fill_char) {
  std::cout << std::endl;
  for (int i = 0; i < side; i++) {
    for (int j = 0; j < side; j++) {
      std::cout << fill_char;
    }
    std::cout << std::endl;
  }
}

int main() {
  int side;
  char fill_char;

  std::cout << "Input side of square: ";
  std::cin >> side;
  std::cout << "Input character of  square: ";
  std::cin >> fill_char;
  DisplayCharSquare(side, fill_char);

  return 0;
}
