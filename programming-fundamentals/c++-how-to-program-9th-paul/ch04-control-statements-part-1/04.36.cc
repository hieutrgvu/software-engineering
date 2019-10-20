// 4.36 (World Population Growth) World population has grown considerably over
// the centuries. Continued growth could eventually challenge the limits of
// breathable air, drinkable water, arable cropland and other limited resources.
// There is evidence that growth has been slowing in recent years and that world
// population could peak some time this century, then start to decline.
// For this exercise, research world population growth issues online. Be sure
// to investigate various viewpoints. Get estimates for the current world
// population and its growth rate (the percentage by which it is likely to
// increase this year). Write a program that calculates world population growth
// each year for the next 75 years, using the simplifying assumption that the
// current growth rate will stay constant. Print the results in a table. The
// first column should display the year from year 1 to year 75. The second
// column should display the anticipated world population at the end of that
// year. The third column should display the numerical increase in the world
// population that would occur that year. Using your results, determine the year
// in which the population would be double what it is today, if this year’s
// growth rate were to persist.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <iomanip>

#define INCREASE_RATE       0.0108
#define CURRENT_POPULATION  7.738

int main() {
  int i = 1;
  double population_curr = CURRENT_POPULATION;
  double population_prev = CURRENT_POPULATION;
  int double_year = 0;

  std::cout << std::setprecision(5);
  std::cout << "Unit: Billion" << std::endl;
  std::cout << std::left << std::setw(10) << "Year"
    << std::left << std::setw(15) << "Population"
    << "Increment" << std::endl;

  while (i <= 75) {
    population_curr *= (1 + INCREASE_RATE);

    std::cout << std::left << std::setw(10) << i
      << std::left << std::setw(15) << population_curr
      << population_curr - population_prev << std::endl;

    population_prev = population_curr;

    if ((double_year == 0) && (population_curr >= 2 * CURRENT_POPULATION)) {
      double_year = i;
    }

    ++i;
  }

  std::cout << "After " << double_year << ", the population is doubled."
  << std::endl;
}
