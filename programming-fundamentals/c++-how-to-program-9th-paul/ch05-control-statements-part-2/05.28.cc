// 5.28 (“The Twelve Days of Christmas” Song) Write a program that uses
// repetition and switch statements to print the song “The Twelve Days of
// Christmas.” One switch statement should be used to print the day (i.e.,
// “first,” “second,” etc.). A separate switch statement should be used to
// print the remainder of each verse.
// Visit the website www.12days.com/library/carols/12daysofxmas.htm for the
// complete lyrics to the song.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  std::cout << "The Twelve days of Christmas\n" << std::endl;

  for (int day = 1; day <= 12; day++) {
    std::cout << "On the ";

    switch (day) {
      case 1: std::cout << "first "; break;
      case 2: std::cout << "second "; break;
      case 3: std::cout << "third "; break;
      case 4: std::cout << "fourth "; break;
      case 5: std::cout << "fifth "; break;
      case 6: std::cout << "sixth "; break;
      case 7: std::cout << "seventh "; break;
      case 8: std::cout << "eighth "; break;
      case 9: std::cout << "nineth "; break;
      case 10: std::cout << "tenth "; break;
      case 11: std::cout << "eleventh "; break;
      case 12: std::cout << "twelfth "; break;
    }

    std::cout << "day of Christmas," << std::endl;
    std::cout << "My true love sent to me:" << std::endl;

    switch (day) {
      case 12: std::cout << "12 Drummers Drumming" << std::endl;
      case 11: std::cout << "Eleven Pipers Piping" << std::endl;
      case 10: std::cout << "Ten Lords a Leaping" << std::endl;
      case 9: std::cout << "Nine Ladies Dancing" << std::endl;
      case 8: std::cout << "Eight Maids a Milking" << std::endl;
      case 7: std::cout << "Seven Swans a Swimming" << std::endl;
      case 6: std::cout << "Six Geese a Laying" << std::endl;
      case 5: std::cout << "Five Golden Rings" << std::endl;
      case 4: std::cout << "Four Calling Birds" << std::endl;
      case 3: std::cout << "Three French Hens" << std::endl;
      case 2: std::cout << "Two Turtle Doves" << std::endl << "and ";
      case 1: std::cout << "A Partridge in a Pear Tree " << std::endl; break;
    }

    std::cout << std::endl;
  }
}
