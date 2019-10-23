// 5.24 (Diamond of Asterisks Modification) Modify Exercise 5.23 to read an odd
// number in the range 1 to 19 to specify the number of rows in the diamond,
// then display a diamond of the appropriate size.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int row = 9;

  std::cout << "Enter an odd number (1-19): ";
  std::cin >> row;

  int blank_num = row / 2;
  int asterisk_num = 1;

  for (int i = 0; i < row; ++i) {
    for (int j = 0; j < blank_num; ++j) std::cout << ' ';
    for (int j = 0; j < asterisk_num; ++j) std::cout << '*';
    std::cout << std::endl;

    if (i < row / 2) {
      blank_num--;
      asterisk_num += 2;
    }
    else {
      blank_num++;
      asterisk_num -= 2;
    }
  }
}
