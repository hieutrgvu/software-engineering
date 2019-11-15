// 6.22 (Square of Asterisks) Write a function that displays at the left margin
// of the screen a solid square of asterisks whose side is specified in integer
// parameter side. For example, if side is 4, the function displays the
// following:
// ****
// ****
// ****
// ****

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

void DisplayAsteriskSquare(int side) {
  std::cout << std::endl;
  for (int i = 0; i < side; i++) {
    for (int j = 0; j < side; j++) {
      std::cout << '*';
    }
    std::cout << std::endl;
  }
}

int main() {
  int side;

  std::cout << "Input side of asterisk square: ";
  std::cin >> side;
  DisplayAsteriskSquare(side);

  return 0;
}
