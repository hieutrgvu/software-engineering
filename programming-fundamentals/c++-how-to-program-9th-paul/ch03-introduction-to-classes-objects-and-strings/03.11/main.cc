#include <iostream>

#include "grade_book.h"

int main() {
  // Create two GradeBook objects
  GradeBook grade_book_1("CS101 C++ Programming", "John");
  GradeBook grade_book_2("CS102 Data Structures in C++", "Anna");

  // Display meesage for each GradeBook
  grade_book_1.DisplayMessage();
  std::cout << std::endl;
  grade_book_2.DisplayMessage();
}
