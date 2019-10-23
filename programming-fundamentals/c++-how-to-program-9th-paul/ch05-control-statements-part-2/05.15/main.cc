#include <iostream>

#include "grade_book.h"

int main() {
  // Create two GradeBook objects
  GradeBook grade_book("CS101 C++ Programming");

  // Display meesage for each GradeBook
  grade_book.DisplayMessage();
  grade_book.InputGrades();
  grade_book.DisplayGradeReport();
}
