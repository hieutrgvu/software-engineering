// 6.34 (Guess-the-Number Game) Write a program that plays the game of “guess
// the number” as follows: Your program chooses the number to be guessed by
// selecting an integer at random in the range 1 to 1000. The program then
// displays the following:
//
// I have a number between 1 and 1000.
// Can you guess my number?
// Please type your first guess.
//
// The player then types a first guess. The program responds with one of the
// following:
//
// 1. Excellent! You guessed the number! Would you like to play again (y or n)?
// 2. Too low. Try again.
// 3. Too high. Try again.
//
// If the player’s guess is incorrect, your program should loop until the player
// finally gets the number right. Your program should keep telling the player
// Too high or Too low to help the player “zero in” on the correct answer.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
  int number;
  int input;
  char selection;

  srand(time(0));

  do {
    number = 1 + rand() % 1000;

    std::cout << "I have a number between 1 and 1000.\n"
      << "Can you guess my number?\nPlease type your first guess: ";
    std::cin >> input;

    while (input != number) {
      if (input < number) std::cout << "Too low. Try again: ";
      else std::cout << "Too high. Try again: ";
      std::cin >> input;
    }

    std::cout << "Excellent! You guessed the number! "
      << "Would you like to play again (y or n)? ";
    std::cin >> selection;
  } while (selection == 'y');

  return 0;
}
