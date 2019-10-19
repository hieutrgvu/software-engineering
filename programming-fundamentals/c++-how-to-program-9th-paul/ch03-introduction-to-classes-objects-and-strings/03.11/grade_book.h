#ifndef GRADE_BOOK_H_
#define GRADE_BOOK_H_

#include <string>

class GradeBook {
 public:
  // Constructor that initializes the course name
  GradeBook(std::string course_name, std::string instructor_name);

  // Course name mutator and accessor
  void set_course_name(std::string course_name);
  std::string course_name();

  // Instructor name mutator and accessor
  void set_instructor_name(std::string instructor_name);
  std::string instructor_name();

  // Function that displays a welcome message
  void DisplayMessage();

 private:
  std::string course_name_;
  std::string instructor_name_;
};

#endif // GRADE_BOOK_H_
