#include "grade_book.h"

#include <iostream>

// Constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(std::string course_name, std::string instructor_name) {
  set_course_name(course_name);
  set_instructor_name(instructor_name);
}

void GradeBook::set_course_name(std::string course_name) {
  course_name_ = course_name;
}

std::string GradeBook::course_name() { return course_name_; }

void GradeBook::set_instructor_name(std::string instructor_name) {
  instructor_name_ = instructor_name;
}

std::string GradeBook::instructor_name() { return instructor_name_; }

// Display a welcome message to the GradeBook user
void GradeBook::DisplayMessage() {
  std::cout << "Welcome to the grade book for " << course_name() << "!\n"
    << "This course is presented by: " << instructor_name() << "." << std::endl;
}
