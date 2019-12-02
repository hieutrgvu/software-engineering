// Fig. 21.15: DeckOfCards.cpp
// Member-function definitions for class DeckOfCards that simulates
// the shuffling and dealing of a deck of playing cards.
#include <iostream>
#include <iomanip>
#include "DeckOfCards.h" // DeckOfCards class definition
using namespace std;

// no-argument DeckOfCards constructor intializes deck
DeckOfCards::DeckOfCards()

{
  for ( int i = 0; i < numberOfCards; ++i )
  {
    deck[ i ].face = i % faces; // faces in order
    deck[ i ].suit = i / faces; // suits in order
    deck[ i ].color = i / ( faces * colors ); // colors in order
  } // end for
} // end no-argument DeckOfCards constructor

// deal cards in deck
void DeckOfCards::deal()
{
  // display each card’s face and suit
  for ( int i = 0; i < numberOfCards; ++i )
    cout << right << setw( 5 ) << deck[ i ].face << " of "
      << left << setw( 8 ) << deck[ i ].suit
      << ( ( i + 1 ) % 2 ? '\t' : '\n' );
} // end function deal
