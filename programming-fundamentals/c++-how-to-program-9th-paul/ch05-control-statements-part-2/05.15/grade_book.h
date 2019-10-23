#ifndef GRADE_BOOK_H_
#define GRADE_BOOK_H_

#include <string>

class GradeBook {
 public:
  // Constructor that initializes the course name
  GradeBook(std::string course_name);

  // Course name mutator and accessor
  void set_course_name(std::string course_name);
  std::string course_name();

  void DisplayMessage();
  void InputGrades();
  void DisplayGradeReport();

 private:
  std::string course_name_;
  int a_count_;   // count of A grades
  int b_count_;   // count of B grades
  int c_count_;   // count of C grades
  int d_count_;   // count of D grades
  int f_count_;   // count of F grades
};

#endif // GRADE_BOOK_H_
