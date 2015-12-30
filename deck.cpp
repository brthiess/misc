#pragma once

#include <stdlib.h> 
#include <time.h> 
#include "card.cpp"
#include "hand.cpp"

using namespace std;

class Deck {

	private: 
		Card cards[52];
		int numCards = 0;
		
	public:
		Deck() {
			srand (time(NULL));
			numCards = 52;
			cards[0] = Card(Card::TWOH);
			cards[1] = Card(Card::THREEH);
			cards[2] = Card(Card::FOURH);
			cards[3] = Card(Card::FIVEH);
			cards[4] = Card(Card::SIXH);
			cards[5] = Card(Card::SEVENH);
			cards[6] = Card(Card::EIGHTH);
			cards[7] = Card(Card::NINEH);
			cards[8] = Card(Card::TENH);
			cards[9] = Card(Card::JACKH);
			cards[10] = Card(Card::QUEENH);
			cards[11] = Card(Card::KINGH);
			cards[12] = Card(Card::ACEH);
			cards[13] = Card(Card::TWOD);
			cards[14] = Card(Card::THREED);
			cards[15] = Card(Card::FOURD);
			cards[16] = Card(Card::FIVED);
			cards[17] = Card(Card::SIXD);
			cards[18] = Card(Card::SEVEND);
			cards[19] = Card(Card::EIGHTD);
			cards[20] = Card(Card::NINED);
			cards[21] = Card(Card::TEND);
			cards[22] = Card(Card::JACKD);
			cards[23] = Card(Card::QUEEND);
			cards[24] = Card(Card::KINGD);
			cards[25] = Card(Card::ACED);
			cards[26] = Card(Card::TWOS);
			cards[27] = Card(Card::THREES);
			cards[28] = Card(Card::FOURS);
			cards[29] = Card(Card::FIVES);
			cards[30] = Card(Card::SIXS);
			cards[31] = Card(Card::SEVENS);
			cards[32] = Card(Card::EIGHTS);
			cards[33] = Card(Card::NINES);
			cards[34] = Card(Card::TENS);
			cards[35] = Card(Card::JACKS);
			cards[36] = Card(Card::QUEENS);
			cards[37] = Card(Card::KINGS);
			cards[38] = Card(Card::ACES);
			cards[39] = Card(Card::TWOC);
			cards[40] = Card(Card::THREEC);
			cards[41] = Card(Card::FOURC);
			cards[42] = Card(Card::FIVEC);
			cards[43] = Card(Card::SIXC);
			cards[44] = Card(Card::SEVENC);
			cards[45] = Card(Card::EIGHTC);
			cards[46] = Card(Card::NINEC);
			cards[47] = Card(Card::TENC);
			cards[48] = Card(Card::JACKC);
			cards[49] = Card(Card::QUEENC);
			cards[50] = Card(Card::KINGC);
			cards[51] = Card(Card::ACEC);
		}
		
		void reshuffle() {
			numCards = 52;
			cards[0] = Card(Card::TWOH);
			cards[1] = Card(Card::THREEH);
			cards[2] = Card(Card::FOURH);
			cards[3] = Card(Card::FIVEH);
			cards[4] = Card(Card::SIXH);
			cards[5] = Card(Card::SEVENH);
			cards[6] = Card(Card::EIGHTH);
			cards[7] = Card(Card::NINEH);
			cards[8] = Card(Card::TENH);
			cards[9] = Card(Card::JACKH);
			cards[10] = Card(Card::QUEENH);
			cards[11] = Card(Card::KINGH);
			cards[12] = Card(Card::ACEH);
			cards[13] = Card(Card::TWOD);
			cards[14] = Card(Card::THREED);
			cards[15] = Card(Card::FOURD);
			cards[16] = Card(Card::FIVED);
			cards[17] = Card(Card::SIXD);
			cards[18] = Card(Card::SEVEND);
			cards[19] = Card(Card::EIGHTD);
			cards[20] = Card(Card::NINED);
			cards[21] = Card(Card::TEND);
			cards[22] = Card(Card::JACKD);
			cards[23] = Card(Card::QUEEND);
			cards[24] = Card(Card::KINGD);
			cards[25] = Card(Card::ACED);
			cards[26] = Card(Card::TWOS);
			cards[27] = Card(Card::THREES);
			cards[28] = Card(Card::FOURS);
			cards[29] = Card(Card::FIVES);
			cards[30] = Card(Card::SIXS);
			cards[31] = Card(Card::SEVENS);
			cards[32] = Card(Card::EIGHTS);
			cards[33] = Card(Card::NINES);
			cards[34] = Card(Card::TENS);
			cards[35] = Card(Card::JACKS);
			cards[36] = Card(Card::QUEENS);
			cards[37] = Card(Card::KINGS);
			cards[38] = Card(Card::ACES);
			cards[39] = Card(Card::TWOC);
			cards[40] = Card(Card::THREEC);
			cards[41] = Card(Card::FOURC);
			cards[42] = Card(Card::FIVEC);
			cards[43] = Card(Card::SIXC);
			cards[44] = Card(Card::SEVENC);
			cards[45] = Card(Card::EIGHTC);
			cards[46] = Card(Card::NINEC);
			cards[47] = Card(Card::TENC);
			cards[48] = Card(Card::JACKC);
			cards[49] = Card(Card::QUEENC);
			cards[50] = Card(Card::KINGC);
			cards[51] = Card(Card::ACEC);
		}
		
		Card getRandomCard() {
			int randomInt = rand() % numCards;
			Card randomCard = cards[randomInt];
			//Remove card from deck
			removeCard(randomInt);
			return randomCard;
		}
		
		Hand getHand() {
			return Hand(getRandomCard(), getRandomCard(), getRandomCard(), getRandomCard(), getRandomCard());
		}
		
		private:		
			void removeCard(int cardNumber) {
				for(int i = cardNumber; i < numCards - 1; i++) {
					cards[i] = cards[i + 1];
				}
				numCards -= 1;
			}
} d;