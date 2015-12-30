#include <iostream>
#include <fstream>
#include <bitset>
#include <ctime>
#include "game.cpp"






int main()
{
	int numPlayers;
	//1. Take input for number of players
	std::cout << "\nNumber of Players: ";
	std::cin >> numPlayers;
	
	//1.5 Initialize Game
	Game g = Game(numPlayers);
	
	
	while(true) {
		//1.9 Start new Round
		g.startNewRound();
		
		//2. Take input for 2 cards		
		std::cout << "\nHand: (ex: 4S JD)\n";
		string myHand;
		std::cin >> myHand;	
		g.setMyHand(myHand);
		
		
		//3. Get winning percentage
		g.get_winning_percentage();
		
		//4. Take input for next 3 cards
		
		//5. Get winning percentage
		
		//6. Take input for next card
		
		//7. Get winning percentage
		
		//8. Take input for next card
		
		//9. Get winning percentage
	}
}