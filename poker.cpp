#include <iostream>
#include <bitset>
#include "hand.cpp"
#include "deck.cpp"
#include "fast_eval.c"



int main()
{
  Deck d = Deck();
  Hand h1 = Hand();
  h1.addCard(d.getRandomCard());
  h1.addCard(d.getRandomCard());
  h1.addCard(d.getRandomCard());
  h1.addCard(d.getRandomCard());
  h1.addCard(d.getRandomCard());
  h1.printHand();
  
  Hand h2 = Hand();
  h2.addCard(d.getRandomCard());
  h2.addCard(d.getRandomCard());
  h2.addCard(d.getRandomCard());
  h2.addCard(d.getRandomCard());
  h2.addCard(d.getRandomCard());
  h2.printHand();
  
  int value1 = eval_5hand_fast(h1.getCardHash(1), h1.getCardHash(2), h1.getCardHash(3), h1.getCardHash(4), h1.getCardHash(5));
  int value2 = eval_5hand_fast(h2.getCardHash(1), h2.getCardHash(2), h2.getCardHash(3), h2.getCardHash(4), h2.getCardHash(5));
  std::cout << "\n\nValue: " << value1;
  std::cout << "\nValue: " << value2;
  
}