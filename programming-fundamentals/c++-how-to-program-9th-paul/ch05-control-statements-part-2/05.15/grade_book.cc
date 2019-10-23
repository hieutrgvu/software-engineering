#include "grade_book.h"

#include <iostream>

// Constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(std::string course_name) {
  set_course_name(course_name);
  a_count_ = 0;
  b_count_ = 0;
  c_count_ = 0;
  d_count_ = 0;
  f_count_ = 0;
}

void GradeBook::set_course_name(std::string course_name) {
  course_name_ = course_name;
}

std::string GradeBook::course_name() { return course_name_; }

// Display a welcome message to the GradeBook user
void GradeBook::DisplayMessage() {
  std::cout << "Welcome to the grade book for " << course_name() << std::endl;
}

void GradeBook::InputGrades() {
  int grade;

  std::cout << "Enter the letter grades." << std::endl
    << "Enter the EOF character to end input." << std::endl;

  // loop until user types end-of-file key sequence
  while ((grade = std::cin.get()) != EOF) {
    // determine which grade was entered
    switch (grade) {
      case 'A':
      case 'a':
        ++a_count_;
        break;

      case 'B':
      case 'b':
        ++b_count_;
        break;

      case 'C':
      case 'c':
        ++c_count_;
        break;

      case 'D':
      case 'd':
        ++d_count_;
        break;

      case 'F':
      case 'f':
        ++f_count_;
        break;

      case '\n':
      case '\t':
      case ' ':
        break;

      default:
        std::cout << "Incorrect letter grade entered."
          << " Enter a new grade." << std::endl;
        break;
    }
  }
}

void GradeBook::DisplayGradeReport() {
  std::cout << "\n\nNumber of students who received each letter grade:"
    << "\nA: " << a_count_
    << "\nB: " << b_count_
    << "\nC: " << c_count_
    << "\nD: " << d_count_
    << "\nF: " << f_count_
    << std::endl;

  double average = (a_count_ * 4 + b_count_ * 3 + c_count_ * 2 + d_count_) /
    static_cast<double>(a_count_ + b_count_ + c_count_ + d_count_ + f_count_);
  std::cout << std::endl << "The average point is " << average << std::endl;
}
