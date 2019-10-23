// 5.23 (Diamond of Asterisks) Write a program that prints the following diamond
// shape. You may use output statements that print a single asterisk (*), a
// single blank or a single newline. Maximize your use of repetition (with
// nested for statements) and minimize the number of output statements.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int row = 9;
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
