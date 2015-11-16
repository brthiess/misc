#include "card.cpp"

class Hand {
	public:
		Card cards [5];
	
	public:
		Hand() {
			for(int i = 0; i < 5; i++) {
				cards[i] = Card(Card::UNKNOWN, Card::UNKNOWN);
			}
		}
	
	public:
	void addCard(Card c) {
		for (int i = 0; i < 5; i++) {
			if (cards[i].getSuit() == Card::UNKNOWN) {
				cards[i] = c;
				return;
			}
		}
		std::cout << "\nERROR: Hand Full.  Can't Add Card\n";
	}
	
	void printHand() {
		std::cout << "\n\nHand: ";
		for(int i = 0; i < 5; i++) {			
			cards[i].printCard();
		}
	}
	int getValue() {
		return 1;
	}
	int getCardHash(int cardNumber) {
		return cards[cardNumber - 1].getHashValue();
	}
};