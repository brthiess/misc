#include <stdlib.h> 
#include <time.h> 

class Deck {

	private: 
		Card cards[52];
		int numCards = 0;
		
	public:
		Deck() {
			srand (time(NULL));
			numCards = 52;
			cards[0] = Card(Card::TWO, Card::DIAMONDS);
			cards[1] = Card(Card::THREE, Card::DIAMONDS);
			cards[2] = Card(Card::FOUR, Card::DIAMONDS);
			cards[3] = Card(Card::FIVE, Card::DIAMONDS);
			cards[4] = Card(Card::SIX, Card::DIAMONDS);
			cards[5] = Card(Card::SEVEN, Card::DIAMONDS);
			cards[6] = Card(Card::EIGHT, Card::DIAMONDS);
			cards[7] = Card(Card::NINE, Card::DIAMONDS);
			cards[8] = Card(Card::TEN, Card::DIAMONDS);
			cards[9] = Card(Card::JACK, Card::DIAMONDS);
			cards[10] = Card(Card::QUEEN, Card::DIAMONDS);
			cards[11] = Card(Card::KING, Card::DIAMONDS);
			cards[12] = Card(Card::ACE, Card::DIAMONDS);
			cards[13] = Card(Card::TWO, Card::CLUBS);
			cards[14] = Card(Card::THREE, Card::CLUBS);
			cards[15] = Card(Card::FOUR, Card::CLUBS);
			cards[16] = Card(Card::FIVE, Card::CLUBS);
			cards[17] = Card(Card::SIX, Card::CLUBS);
			cards[18] = Card(Card::SEVEN, Card::CLUBS);
			cards[19] = Card(Card::EIGHT, Card::CLUBS);
			cards[20] = Card(Card::NINE, Card::CLUBS);
			cards[21] = Card(Card::TEN, Card::CLUBS);
			cards[22] = Card(Card::JACK, Card::CLUBS);
			cards[23] = Card(Card::QUEEN, Card::CLUBS);
			cards[24] = Card(Card::KING, Card::CLUBS);
			cards[25] = Card(Card::ACE, Card::CLUBS);
			cards[26] = Card(Card::TWO, Card::SPADES);
			cards[27] = Card(Card::THREE, Card::SPADES);
			cards[28] = Card(Card::FOUR, Card::SPADES);
			cards[29] = Card(Card::FIVE, Card::SPADES);
			cards[30] = Card(Card::SIX, Card::SPADES);
			cards[31] = Card(Card::SEVEN, Card::SPADES);
			cards[32] = Card(Card::EIGHT, Card::SPADES);
			cards[33] = Card(Card::NINE, Card::SPADES);
			cards[34] = Card(Card::TEN, Card::SPADES);
			cards[35] = Card(Card::JACK, Card::SPADES);
			cards[36] = Card(Card::QUEEN, Card::SPADES);
			cards[37] = Card(Card::KING, Card::SPADES);
			cards[38] = Card(Card::ACE, Card::SPADES);
			cards[39] = Card(Card::TWO, Card::HEARTS);
			cards[40] = Card(Card::THREE, Card::HEARTS);
			cards[41] = Card(Card::FOUR, Card::HEARTS);
			cards[42] = Card(Card::FIVE, Card::HEARTS);
			cards[43] = Card(Card::SIX, Card::HEARTS);
			cards[44] = Card(Card::SEVEN, Card::HEARTS);
			cards[45] = Card(Card::EIGHT, Card::HEARTS);
			cards[46] = Card(Card::NINE, Card::HEARTS);
			cards[47] = Card(Card::TEN, Card::HEARTS);
			cards[48] = Card(Card::JACK, Card::HEARTS);
			cards[49] = Card(Card::QUEEN, Card::HEARTS);
			cards[50] = Card(Card::KING, Card::HEARTS);
			cards[51] = Card(Card::ACE, Card::HEARTS);
		}
		
		Card getRandomCard() {
			int randomInt = rand() % numCards;
			Card randomCard = cards[randomInt];
			//Remove card from deck
			removeCard(randomInt);
			return randomCard;
		}
		
		private:		
			void removeCard(int cardNumber) {
				for(int i = cardNumber; i < numCards - 1; i++) {
					cards[i] = cards[i + 1];
				}
				numCards -= 1;
			}
};