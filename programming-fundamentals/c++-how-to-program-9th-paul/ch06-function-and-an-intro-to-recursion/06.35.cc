// 6.35 (Guess-the-Number Game Modification) Modify the program of Exercise
// 6.34 to count the number of guesses the player makes. If the number is 10
// or fewer, print "Either you know the secret or you got lucky!" If the player
// guesses the number in 10 tries, then print "Ahah! You know the secret!" If
// the player makes more than 10 guesses, then print "You should be able to do
// better!" Why should it take no more than 10 guesses? Well, with each “good
// guess” the player should be able to eliminate half of the numbers. Now show
// why any number from 1 to 1000 can be guessed in 10 or fewer tries.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// If players choose the average of too bounds, players can eliminate half of
// the number. Therefore, the maximum number to solve can be log2(1000) + 1 = 10

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
  int number;
  int input;
  char selection;
  int tries = 1;

  srand(time(0));

  do {
    tries = 1;
    number = 1 + rand() % 1000;

    std::cout << "I have a number between 1 and 1000.\n"
      << "Can you guess my number?\nPlease type your first guess: ";
    std::cin >> input;

    while (input != number) {
      tries++;
      if (input < number) std::cout << "Too low. Try again: ";
      else std::cout << "Too high. Try again: ";
      std::cin >> input;
    }

    if (tries < 10) std::cout << "Either you know the secret or you got lucky!";
    else if (tries == 10) std::cout << "Ahah! You know the secret!";
    else  std::cout << "You should be able to do better!";

    std::cout << "\nExcellent! You guessed the number! "
      << "Would you like to play again (y or n)? ";
    std::cin >> selection;
  } while (selection == 'y');

  return 0;
}
