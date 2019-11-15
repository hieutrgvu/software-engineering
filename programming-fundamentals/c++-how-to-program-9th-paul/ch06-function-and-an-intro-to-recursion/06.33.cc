// 6.33 (Coin Tossing) Write a program that simulates coin tossing. For each
// toss of the coin, the program should print Heads or Tails. Let the program
// toss the coin 100 times and count the number of times each side of the coin
// appears. Print the results. The program should call a separate function flip
// that takes no arguments and returns 0 for tails and 1 for heads. [Note: If
// the program realistically simulates the coin tossing, then each side of the
// coin should appear approximately half the time.]

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <stdlib.h>
#include <time.h>

int FlipCoin() {
  return rand() % 2;
}

int main() {
  int heads = 0;
  int tails = 0;

  srand(time(0));
  for (int i = 0; i < 100; i++) {
    if (FlipCoin() == 1) heads++;
    else tails++;
  }

  std::cout << "Heads: " << heads << std::endl;
  std::cout << "Tails: " << tails << std::endl;

  return 0;
}
