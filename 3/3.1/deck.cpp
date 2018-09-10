#include <iostream>
#include "deck.h"
#include "card.h"

using namespace std;

Deck :: Deck(int cards = 10){
	for(int i: cards) deck.push_back(Card c());
} 

Card Deck :: deal(){
	if(deck.size() > 0)	return deck.pop_back();
	cout << "Deck is empty" << endl;
	return 1;
}
