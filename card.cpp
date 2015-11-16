#include <string>

using namespace std;

class Card {
	public:
		static const int UNKNOWN = -1;
		static const int SPADES = 1 << 12;   // Codes for the 4 suits.
		static const int HEARTS = 2 << 12;
		static const int DIAMONDS = 4 << 12;
		static const int CLUBS = 8 << 12;
		
		//value
		static const int TWO = 0;
		static const int THREE = 1;
		static const int FOUR = 2;
		static const int FIVE = 3;
		static const int SIX = 4;
		static const int SEVEN = 5;
		static const int EIGHT = 6;
		static const int NINE = 7;
		static const int TEN = 8;
		static const int JACK = 9;
		static const int QUEEN = 10;  
		static const int KING = 11;
		static const int ACE = 12;
		
	private:
		//hash
		static const int TWO_HASH = 2;
		static const int THREE_HASH = 3;
		static const int FOUR_HASH = 5;
		static const int FIVE_HASH = 7;
		static const int SIX_HASH = 11;
		static const int SEVEN_HASH = 13;
		static const int EIGHT_HASH = 17;
		static const int NINE_HASH = 19;
		static const int TEN_HASH = 23;
		static const int JACK_HASH = 27;
		static const int QUEEN_HASH = 31;  
		static const int KING_HASH = 37;
		static const int ACE_HASH = 41;
		
		//rank
		static const int TWO_RANK = 0 << 8;
		static const int THREE_RANK = 1 << 8;
		static const int FOUR_RANK = 2 << 8;
		static const int FIVE_RANK = 3 << 8;
		static const int SIX_RANK = 4 << 8;
		static const int SEVEN_RANK = 5 << 8;
		static const int EIGHT_RANK = 6 << 8;
		static const int NINE_RANK = 7 << 8;
		static const int TEN_RANK = 8 << 8;
		static const int JACK_RANK = 9 << 8;
		static const int QUEEN_RANK = 10 << 8;  
		static const int KING_RANK = 11 << 8;
		static const int ACE_RANK = 12 << 8; 
		
		//bit
		static const int TWO_BIT = 1 << 16;
		static const int THREE_BIT = 2 << 16;
		static const int FOUR_BIT = 4 << 16;
		static const int FIVE_BIT = 8 << 16;
		static const int SIX_BIT = 16 << 16;
		static const int SEVEN_BIT = 32 << 16;
		static const int EIGHT_BIT = 64 << 16;
		static const int NINE_BIT = 128 << 16;
		static const int TEN_BIT = 256 << 16;
		static const int JACK_BIT = 512 << 16;
		static const int QUEEN_BIT = 1024  << 16;
		static const int KING_BIT = 2048 << 16;
		static const int ACE_BIT = 4096 << 16;		
		
	private:
		int hashArray [3*13] = { TWO_HASH, TWO_BIT, TWO_RANK, THREE_HASH, THREE_BIT, THREE_RANK, FOUR_HASH, FOUR_BIT, FOUR_RANK, FIVE_HASH, FIVE_BIT, FIVE_RANK, SIX_HASH, SIX_BIT, SIX_RANK, SEVEN_HASH, SEVEN_BIT, SEVEN_RANK, EIGHT_HASH, EIGHT_BIT, EIGHT_RANK, NINE_HASH, NINE_BIT, NINE_RANK, TEN_HASH, TEN_BIT, TEN_RANK, JACK_HASH, JACK_BIT, JACK_RANK, QUEEN_HASH, QUEEN_BIT, QUEEN_RANK, KING_HASH, KING_BIT, KING_RANK, ACE_HASH, ACE_BIT, ACE_RANK};
		
	
	private:
		int suit;
		int value;
		int hashValue;

	
	public:
		Card() {
			suit = UNKNOWN;
			value = UNKNOWN;
		}
		Card(int theValue, int theSuit) {
			suit = theSuit;
			value = theValue;
			hashValue = hashArray[3 * value] + hashArray[3 * value + 1] + hashArray[3 * value + 2] + suit;
		}
	
		int getSuit() {
			return suit;
		}
		
		int getValue() {
			return value;
		}
		void printCard() {
			string suitString = "Unknown";
			if (suit == DIAMONDS) {
				suitString = "Diamonds";
			}
			else if (suit == CLUBS) {
				suitString = "Clubs";
			}
			else if (suit == SPADES) {
				suitString = "Spades";
			}
			else if (suit == HEARTS) {
				suitString = "Hearts";
			}
			
			string valueString = "Unknown";
			if (value == TWO) {
				valueString = "Two";
			}
			else if (value == THREE) {
				valueString = "Three";
			}
			else if (value == FOUR) {
				valueString = "Four";
			}
			else if (value == FIVE) {
				valueString = "Five";
			}
			else if (value == SIX) {
				valueString = "Six";
			}
			else if (value == SEVEN) {
				valueString = "Seven";
			}
			else if (value == EIGHT) {
				valueString = "Eight";
			}
			else if (value == NINE) {
				valueString = "Nine";
			}
			else if (value == TEN) {
				valueString = "Ten";
			}
			else if (value == JACK) {
				valueString = "Jack";
			}
			else if (value == QUEEN) {
				valueString = "Queen";
			}
			else if (value == KING) {
				valueString = "King";
			}
			else if (value == ACE) {
				valueString = "Ace";
			}
			std::cout << "\n" << valueString << " of " << suitString;
		}
		int getHashValue() {
			return hashValue;
		}
};