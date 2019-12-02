// Fig. 21.14: DeckOfCards.h
// Definition of class DeckOfCards that
// represents a deck of playing cards.
#include <vector>
using namespace std;

// BitCard structure definition with bit fields
struct BitCard
{
  unsigned face : 4; // 4 bits; 0-15
  unsigned suit : 2; // 2 bits; 0-3
  unsigned color : 1; // 1 bit; 0-1
}; // end struct BitCard

// DeckOfCards class definition
class DeckOfCards
{
public:
  static const int faces = 13;
  static const int colors = 2; // black and red
  static const int numberOfCards = 52;

  DeckOfCards(); // constructor initializes deck
  void deal(); // deals cards in deck

private:
  vector< BitCard > deck; // represents deck of cards
}; // end class DeckOfCards
