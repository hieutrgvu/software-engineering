// 7.20 (Airline Reservations System) A small airline has just purchased a
// computer for its new automated reservations system. You’ve been asked to
// program the new system. You are to write a program to assign seats on each
// flight of the airline’s only plane (capacity: 10 seats).
// Your program should display the following menu of alternatives — Please type
// 1 for "First Class" and Please type 2 for "Economy". If the person types 1,
// your program should assign a seat in the first class section (seats 1–5).
// If the person types 2, your program should assign a seat in the economy
// section (seats 6–10). Your program should print a boarding pass indicating
// the person’s seat number and whether it’s in the first class or economy
// section of the plane.
// Use a one-dimensional array to represent the seating chart of the plane.
// Initialize all the elements of the array to false to indicate that all seats
// are empty. As each seat is assigned, set the corresponding elements of the
// array to true to indicate that the seat is no longer available.
// Your program should, of course, never assign a seat that has already been
// assigned. When the first class section is full, your program should ask the
// person if it’s acceptable to be placed in the economy section (and vice
// versa). If yes, then make the appropriate seat assignment. If no, then print
// the message "Next flight leaves in 3 hours."

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int seats[10] = { };
  int registered[2] = {0, 0};
  int selection;

  std::cout << "Please type 1 for \"First Class\", 2 for \"Economy\""
    << " or -1 to escape: ";
  std::cin >> selection;
  selection--;

  while ((selection == 0) || (selection == 1)) {
    if (registered[selection] < 5) {
      seats[selection * 5 + registered[selection]] = 1;
      registered[selection]++;
    }
    else {
      if (registered[1 - selection] < 5) {
        std::cout << "Would you like to choose "
          << ((selection == 0) ? "Economy" : "First Class")
          << " instead [y/n]: ";
        char input;
        std::cin >> input;
        if (input == 'y') {
          seats[(1 - selection) * 5 + registered[1 - selection]] = 1;
          registered[1 - selection]++;
        }
      }
      else {
        std::cout << "Full!!!" << std::endl;
        break;
      }
    }

    std::cout << "Please type 1 for \"First Class\", 2 for \"Economy\""
      << " or -1 to escape: ";
    std::cin >> selection;
    selection--;
  }

  for (int i = 0; i < sizeof(seats)/sizeof(int); i++) {
    std::cout << "Seat " << i + 1 << "\t" << seats[i] << std::endl;
  }

  return 0;
}
