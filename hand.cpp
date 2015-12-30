#pragma once

#include "fast_eval.c"

using namespace std;

class Hand {
	public:
		Card cards [5];
	
	public:
		Hand() {
			for(int i = 0; i < 5; i++) {
				cards[i] = Card();
			}
		}
		
		Hand(int numCards) {
			for(int i = 0; i < numCards; i++) {
				cards[i] = Card();
			}
			for(int i = numCards; i < 5; i++) {
				cards[i] = Card::UNKNOWN;
			}
		}
		
		Hand(Card c1, Card c2, Card c3, Card c4, Card c5){
			cards[0] = c1;
			cards[1] = c2;
			cards[2] = c3;
			cards[3] = c4;
			cards[4] = c5;
		}
	
	public:
	void addCard(Card c) {
		for (int i = 0; i < 5; i++) {
			if (cards[i].getHashValue() == Card::UNKNOWN) {
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
	int getCardHash(int cardNumber) {
		return cards[cardNumber - 1].getHashValue();
	}
	
	void getNewRandomHand() {
			for(int i = 0; i < 5; i++) {
				cards[i] = Card::getRandomCard();
			}
	}	
	int eval() {
		return eval_5hand_fast(cards[0].getHashValue(), cards[1].getHashValue(), cards[2].getHashValue(), cards[3].getHashValue(), cards[4].getHashValue());
	}
};