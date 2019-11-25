// 7.19 (Craps Game Modification) Modify the program of Fig. 6.11 to play 1000
// games of craps. The program should keep track of the statistics and answer
// the following questions:
// a) How many games are won on the 1st roll, 2nd roll, ..., 20th roll, and
// after the 20th roll?
// b) How many games are lost on the 1st roll, 2nd roll, ... , 20th roll, and
// after the 20th roll?
// c) What are the chances of winning at craps? [Note: You should discover that
// craps is one of the fairest casino games. What do you suppose this means?]
// d) What’s the average length of a game of craps?
// e) Do the chances of winning improve with the length of the game?

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// Fig. 6.11: fig06_11.cpp
// Craps simulation.
#include <iostream>
#include <cstdlib> // contains prototypes for functions srand and rand
#include <ctime> // contains prototype for function time
using namespace std;

int rollDice(); // rolls dice, calculates and displays sum 9
int main()
{
  // enumeration with constants that represent the game status
  enum Status { CONTINUE, WON, LOST }; // all caps in constants
  int myPoint; // point if no win or loss on first roll
  const int max_roll = 20;
  int array_win[max_roll] = {};
  int array_lose[max_roll] = {};
  int num_of_roll;

  Status gameStatus; // can contain CONTINUE, WON or LOST

  // randomize random number generator using current time
  srand( time( 0 ) );

  for (int i = 0; i < 1000; i++) {
    int sumOfDice = rollDice(); // first roll of the dice

    // determine game status and point (if needed) based on first roll
    switch ( sumOfDice )
    {
      case 7: // win with 7 on first roll
      case 11: // win with 11 on first roll
        gameStatus = WON;
        break;
      case 2: // lose with 2 on first roll
      case 3: // lose with 3 on first roll
      case 12: // lose with 12 on first roll
        gameStatus = LOST;
        break;
      default: // did not win or lose, so remember point
        gameStatus = CONTINUE; // game is not over
        myPoint = sumOfDice; // remember the point
        cout << "Point is " << myPoint << endl;
        break; // optional at end of switch
    } // end switch

    num_of_roll = 1;
    // while game is not complete
    while ( gameStatus == CONTINUE ) // not WON or LOST
    {
      sumOfDice = rollDice(); // roll dice again

      // determine game status
      if ( sumOfDice == myPoint ) // win by making point
        gameStatus = WON;
      else
        if ( sumOfDice == 7 ) // lose by rolling 7 before point
          gameStatus = LOST;

      num_of_roll++;
    } // end while

    // display won or lost message
    if ( gameStatus == WON ) {
      cout << "Player wins" << endl;
      if (num_of_roll < 20) array_win[num_of_roll - 1]++;
      else array_win[max_roll - 1]++;
    }
    else {
      cout << "Player loses" << endl;
      if (num_of_roll < 20) array_lose[num_of_roll - 1]++;
      else array_lose[max_roll - 1]++;
    }
  }

  for (int i = 0; i < max_roll; i++) {
    cout << i << "\t" << array_win[i] << "\t" << array_lose[i] << endl;
  }
} // end main

// roll dice, calculate sum and display results
int rollDice()
{
  // pick random die values
  int die1 = 1 + rand() % 6; // first die roll
  int die2 = 1 + rand() % 6; // second die roll

  int sum = die1 + die2; // compute sum of die values

  // display results of this roll
  cout << "Player rolled " << die1 << "+" << die2
    << "=" << sum << endl;

  return sum; // end function rollDice
} // end function rollDice
