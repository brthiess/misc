#include "deck.cpp"
#include "hand.cpp"
#include "card.cpp"

class Game {
	
	//Hand hand = parse_input(myHand, Hand(0));
	//hand.printHand();
	
	private:
		int numPlayers;
		int numPlayersLeftInRound;
		Hand myHand;
		Hand communityHand;
	
	public:
		Game(int numPlayersVar) {
			numPlayers = numPlayersVar;
			Hand * opponents = new Hand[numPlayers];
		}
		
		void startNewRound() {
			communityHand = Hand(0);
			numPlayersLeftInRound = numPlayers;
		}
		
		void setMyHand(string hand) {
			myHand = parse_input(hand);
		}
	
		float get_winning_percentage() {
			get_winning_percentage(myHand, numPlayersLeftInRound, communityHand);
		}
		
	private:
		float get_winning_percentage(Hand yourHand, int numPlayers, Hand communityHand) {
			// Loop n times
			int n = 100;
			for (int i = 0; i < n; i++) {
				//1. Put cards in other players hands
				Hand hands[numPlayers];
				for(int i = 0; i < numPlayers; i++) {
					hands[i] = Hand(2);
				}
				
				//2. Fill up community hand if necessary
				fill_up_hand();
				
				//3. Figure out who has the best hand
				
				
				//4. Repeat
			}
			
			
			float f = 0.5;
			return f;
		}
		
		Hand get_best_hand(Hand * handArray) {
			int min = 999999;
			Hand bestHand = Hand();
			for (int i = 0; i < sizeof(handArray); i++){
				if (handArray[i].eval() < min) {
					min = handArray[i].eval();
					bestHand = handArray[i];
				}
			}
			return bestHand;
		}
		
		Hand parse_input(string input) {
			Hand hand = Hand(0);
			Card cardArray[sizeof(input) / 2];
			for(int i = 0; i < sizeof(input) / 2; i++) {
				string number = input.substr(i * 2, 1);
				string suit = input.substr(i * 2 + 1, 1);
				if (number == "a" && suit == "c")  hand.addCard(Card::ACEC);
				else if (number == "2" && suit == "c")  hand.addCard(Card::TWOC);
				else if (number == "3" && suit == "c")  hand.addCard(Card::THREEC);
				else if (number == "4" && suit == "c")  hand.addCard(Card::FOURC);
				else if (number == "5" && suit == "c")  hand.addCard(Card::FIVEC);
				else if (number == "6" && suit == "c")  hand.addCard(Card::SIXC);
				else if (number == "7" && suit == "c")  hand.addCard(Card::SEVENC);
				else if (number == "8" && suit == "c")  hand.addCard(Card::EIGHTC);
				else if (number == "9" && suit == "c")  hand.addCard(Card::NINEC);
				else if (number == "t" && suit == "c")  hand.addCard(Card::TENC);
				else if (number == "j" && suit == "c")  hand.addCard(Card::JACKC);
				else if (number == "q" && suit == "c")  hand.addCard(Card::QUEENC);
				else if (number == "k" && suit == "c")  hand.addCard(Card::KINGC);
				
				else if (number == "a" && suit == "s")  hand.addCard(Card::ACES);
				else if (number == "2" && suit == "s")  hand.addCard(Card::TWOS);
				else if (number == "3" && suit == "s")  hand.addCard(Card::THREES);
				else if (number == "4" && suit == "s")  hand.addCard(Card::FOURS);
				else if (number == "5" && suit == "s")  hand.addCard(Card::FIVES);
				else if (number == "6" && suit == "s")  hand.addCard(Card::SIXS);
				else if (number == "7" && suit == "s")  hand.addCard(Card::SEVENS);
				else if (number == "8" && suit == "s")  hand.addCard(Card::EIGHTS);
				else if (number == "9" && suit == "s")  hand.addCard(Card::NINES);
				else if (number == "t" && suit == "s")  hand.addCard(Card::TENS);
				else if (number == "j" && suit == "s")  hand.addCard(Card::JACKS);
				else if (number == "q" && suit == "s")  hand.addCard(Card::QUEENS);
				else if (number == "k" && suit == "s")  hand.addCard(Card::KINGS);
				
				else if (number == "a" && suit == "d")  hand.addCard(Card::ACED);
				else if (number == "2" && suit == "d")  hand.addCard(Card::TWOD);
				else if (number == "3" && suit == "d")  hand.addCard(Card::THREED);
				else if (number == "4" && suit == "d")  hand.addCard(Card::FOURD);
				else if (number == "5" && suit == "d")  hand.addCard(Card::FIVED);
				else if (number == "6" && suit == "d")  hand.addCard(Card::SIXD);
				else if (number == "7" && suit == "d")  hand.addCard(Card::SEVEND);
				else if (number == "8" && suit == "d")  hand.addCard(Card::EIGHTD);
				else if (number == "9" && suit == "d")  hand.addCard(Card::NINED);
				else if (number == "t" && suit == "d")  hand.addCard(Card::TEND);
				else if (number == "j" && suit == "d")  hand.addCard(Card::JACKD);
				else if (number == "q" && suit == "d")  hand.addCard(Card::QUEEND);
				else if (number == "k" && suit == "d")  hand.addCard(Card::KINGD);
				
				else if (number == "a" && suit == "h")  hand.addCard(Card::ACEH);
				else if (number == "2" && suit == "h")  hand.addCard(Card::TWOH);
				else if (number == "3" && suit == "h")  hand.addCard(Card::THREEH);
				else if (number == "4" && suit == "h")  hand.addCard(Card::FOURH);
				else if (number == "5" && suit == "h")  hand.addCard(Card::FIVEH);
				else if (number == "6" && suit == "h")  hand.addCard(Card::SIXH);
				else if (number == "7" && suit == "h")  hand.addCard(Card::SEVENH);
				else if (number == "8" && suit == "h")  hand.addCard(Card::EIGHTH);
				else if (number == "9" && suit == "h")  hand.addCard(Card::NINEH);
				else if (number == "t" && suit == "h")  hand.addCard(Card::TENH);
				else if (number == "j" && suit == "h")  hand.addCard(Card::JACKH);
				else if (number == "q" && suit == "h")  hand.addCard(Card::QUEENH);
				else if (number == "k" && suit == "h")  hand.addCard(Card::KINGH);
			}		
			return hand;
		}
};