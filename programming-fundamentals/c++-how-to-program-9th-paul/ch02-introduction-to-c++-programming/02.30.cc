// 2.30 (Body Mass Index Calculator) We introduced the body mass index (BMI)
// calculator in Exercise 1.9. The formulas for calculating BMI are
//
//                  weightInPounds x 703
//     BMI = ---------------------------------
//            heightInInches x heightInInches
//
// or
//
//                 weightInKilograms
//     BMI = ---------------------------------
//            heightInMeters x heightInMeters
//
// Create a BMI calculator application that reads the user’s weight in pounds
// and height in inches (or, if you prefer, the user’s weight in kilograms and
// height in meters), then calculates and displays the user’s body mass index.
// Also, the application should display the following information from the
// Department of Health and Human Services/National Institutes of Health so the
// user can evaluate his/her BMI:
//
// BMI VALUES
// Underweight: less than 18.5
// Normal:      between 18.5 and 24.9
// Overweight:  between 25 and 29.9
// Obese:       30 or greater

//******************************************************************************
// Resolved by: Hieu vu
//******************************************************************************

#include <iostream>

int main() {
  float weight_pounds;
  float height_inches;

  std::cout << "Enter weight (pounds) and height (inches): ";
  std::cin >> weight_pounds >> height_inches;

  float bmi = weight_pounds * 203 / height_inches / height_inches;
  std::cout << "Your BMI is " << bmi << std::endl;

  std::cout << "\nBMI VALUES\n"
               "Underweight: less than 18.5\n"
               "Normal:      between 18.5 and 24.9\n"
               "Overweight:  between 25 and 29.9\n"
               "Obese:       30 or greater" << std::endl;

  return 0;
}
