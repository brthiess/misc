#pragma once
#include <string>
#include <stdlib.h> 
#include <time.h> 

using namespace std;

class Card {
	public:
		static const int UNKNOWN = -1;
		static const int TWOD = 81922;
		static const int THREED = 147715;
		static const int FOURD = 279045;
		static const int FIVED = 541447;
		static const int SIXD = 1065995;
		static const int SEVEND = 2114829;
		static const int EIGHTD = 4212241;
		static const int NINED = 8406803;
		static const int TEND = 16795671;
		static const int JACKD = 33573149;
		static const int QUEEND = 67127839;
		static const int KINGD = 134236965;
		static const int ACED = 268454953;
		static const int TWOC = 98306;
		static const int THREEC = 164099;
		static const int FOURC = 295429;
		static const int FIVEC = 557831;
		static const int SIXC = 1082379;
		static const int SEVENC = 2131213;
		static const int EIGHTC = 4228625;
		static const int NINEC = 8423187;
		static const int TENC = 16812055;
		static const int JACKC = 33589533;
		static const int QUEENC = 67144223;
		static const int KINGC = 134253349;
		static const int ACEC = 268471337;
		static const int TWOS = 69634;
		static const int THREES = 135427;
		static const int FOURS = 266757;
		static const int FIVES = 529159;
		static const int SIXS = 1053707;
		static const int SEVENS = 2102541;
		static const int EIGHTS = 4199953;
		static const int NINES = 8394515;
		static const int TENS = 16783383;
		static const int JACKS = 33560861;
		static const int QUEENS = 67115551;
		static const int KINGS = 134224677;
		static const int ACES = 268442665;
		static const int TWOH = 73730;
		static const int THREEH = 139523;
		static const int FOURH = 270853;
		static const int FIVEH = 533255;
		static const int SIXH = 1057803;
		static const int SEVENH = 2106637;
		static const int EIGHTH = 4204049;
		static const int NINEH = 8398611;
		static const int TENH = 16787479;
		static const int JACKH = 33564957;
		static const int QUEENH = 67119647;
		static const int KINGH = 134228773;
		static const int ACEH = 268446761;
		
		static constexpr int hashArray[52] = {TWOS, THREES, FOURS, FIVES, SIXS, SEVENS, EIGHTS, NINES, TENS, JACKS, QUEENS, KINGS, ACES, TWOH, THREEH, FOURH, FIVEH, SIXH, SEVENH, EIGHTH, NINEH, TENH, JACKH, QUEENH, KINGH, ACEH, TWOC, THREEC, FOURC, FIVEC, SIXC, SEVENC, EIGHTC, NINEC, TENC, JACKC, QUEENC, KINGC, ACEC, TWOD, THREED, FOURD, FIVED, SIXD, SEVEND, EIGHTD, NINED, TEND, JACKD, QUEEND, KINGD, ACED };
		
	
	private:
		int hashValue;

	
	public:
		Card() {				
			int randomInt = rand() % 52;		
			hashValue = hashArray[2];
		}
		Card(int theValue) {
			hashValue = theValue;
		}
	
		void printCard() {
			string cardString = "Unknown";
			if (hashValue == TWOS) cardString = "Two of Spades";
			else if (hashValue == THREES) cardString = "Three of Spades";
			else if (hashValue == FOURS) cardString = "Four of Spades";
			else if (hashValue == FIVES) cardString = "Five of Spades";
			else if (hashValue == SIXS) cardString = "Six of Spades";
			else if (hashValue == SEVENS) cardString = "Seven of Spades";
			else if (hashValue == EIGHTS) cardString = "Eight of Spades";
			else if (hashValue == NINES) cardString = "Nine of Spades";
			else if (hashValue == TENS) cardString = "Ten of Spades";
			else if (hashValue == JACKS) cardString = "Jack of Spades";
			else if (hashValue == QUEENS) cardString = "Queen of Spades";
			else if (hashValue == KINGS) cardString = "King of Spades";
			else if (hashValue == ACES) cardString = "Ace of Spades";
			
			else if (hashValue == TWOD) cardString = "Two of Diamonds";
			else if (hashValue == THREED) cardString = "Three of Diamonds";
			else if (hashValue == FOURD) cardString = "Four of Diamonds";
			else if (hashValue == FIVED) cardString = "Five of Diamonds";
			else if (hashValue == SIXD) cardString = "Six of Diamonds";
			else if (hashValue == SEVEND) cardString = "Seven of Diamonds";
			else if (hashValue == EIGHTD) cardString = "Eight of Diamonds";
			else if (hashValue == NINED) cardString = "Nine of Diamonds";
			else if (hashValue == TEND) cardString = "Ten of Diamonds";
			else if (hashValue == JACKD) cardString = "Jack of Diamonds";
			else if (hashValue == QUEEND) cardString = "Queen of Diamonds";
			else if (hashValue == KINGD) cardString = "King of Diamonds";
			else if (hashValue == ACED) cardString = "Ace of Diamonds";
			
			else if (hashValue == TWOC) cardString = "Two of Clubs";
			else if (hashValue == THREEC) cardString = "Three of Clubs";
			else if (hashValue == FOURC) cardString = "Four of Clubs";
			else if (hashValue == FIVEC) cardString = "Five of Clubs";
			else if (hashValue == SIXC) cardString = "Six of Clubs";
			else if (hashValue == SEVENC) cardString = "Seven of Clubs";
			else if (hashValue == EIGHTC) cardString = "Eight of Clubs";
			else if (hashValue == NINEC) cardString = "Nine of Clubs";
			else if (hashValue == TENC) cardString = "Ten of Clubs";
			else if (hashValue == JACKC) cardString = "Jack of Clubs";
			else if (hashValue == QUEENC) cardString = "Queen of Clubs";
			else if (hashValue == KINGC) cardString = "King of Clubs";
			else if (hashValue == ACEC) cardString = "Ace of Clubs";
			
			else if (hashValue == TWOH) cardString = "Two of Hearts";
			else if (hashValue == THREEH) cardString = "Three of Hearts";
			else if (hashValue == FOURH) cardString = "Four of Hearts";
			else if (hashValue == FIVEH) cardString = "Five of Hearts";
			else if (hashValue == SIXH) cardString = "Six of Hearts";
			else if (hashValue == SEVENH) cardString = "Seven of Hearts";
			else if (hashValue == EIGHTH) cardString = "Eight of Hearts";
			else if (hashValue == NINEH) cardString = "Nine of Hearts";
			else if (hashValue == TENH) cardString = "Ten of Hearts";
			else if (hashValue == JACKH) cardString = "Jack of Hearts";
			else if (hashValue == QUEENH) cardString = "Queen of Hearts";
			else if (hashValue == KINGH) cardString = "King of Hearts";
			else if (hashValue == ACEH) cardString = "Ace of Hearts";
			
			std::cout << cardString << "\n";
		}
		int getHashValue() {
			return hashValue;
		}	
		static Card getRandomCard() {
		}
};