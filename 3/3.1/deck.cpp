#include <iostream>
#include "deck.h"
#include "card.h"

using namespace std;

Deck :: Deck(int cards){
	for(int i = 0; i < cards; ++i)
		 deck.push_back(Card());
} 

Card Deck :: deal(){

	if(deck.size() > 0){
		Card temp = deck.back();
		deck.pop_back();
		return temp;
	}
	else
		throw Deck_empty{};
}
