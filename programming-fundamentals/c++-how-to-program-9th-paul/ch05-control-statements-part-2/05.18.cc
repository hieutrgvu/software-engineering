// 5.18 (Number Systems Table) Write a program that prints a table of the
// binary, octal and hexadecimal equivalents of the decimal numbers in the
// range 1–256. If you are not familiar with these number systems, read
// Appendix D, first. [Hint: You can use the stream manipulators dec, oct and
// hex to display integers in decimal, octal and hexadecimal formats,
// respectively.]

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
  int amount_cent = 100000;

  // Display header
  std::cout << std::setw(10) << "Decimal"
    << std::setw(15) << "Binary"
    << std::setw(15) << "Octal"
    << std::setw(15) << "Hexadecimal"
    << std::endl;

  // Calculate amount on deposit for each of ten years
  for (int i = 1; i <= 256; ++i) {
    // Decimal
    std::cout << std::setw(10) << std::setfill(' ') << std::dec << i;

    // Binary
    std::bitset<9> x(i);
    std::cout << std::setw(6) << std::setfill(' ') << "0b"
      << std::setw(9) << std::setfill('0') << x;

    // Octal
    std::cout << std::setw(12) << std::setfill(' ') << "0"
      << std::setw(3) << std::setfill('0') << std::oct << i;

    // Hexadecimal
    std::cout << std::setw(12) << std::setfill(' ') << "0x"
      << std::setw(3) << std::setfill('0') << std::hex << i;

    std::cout << std::endl;
  }
}
