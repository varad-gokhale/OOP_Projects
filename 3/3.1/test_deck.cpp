#include<iostream>
#include "helper.h"
#include "deck.h"
#include "card.h"

using namespace std;

int main(){
	Deck d;
	const int default_cards = 10;
	for(int i = 0; i < default_cards; ++i)	Card c = d.deal();
	
	int num_cards = 30;
	Deck e(num_cards);
	for(int i = 0; i < num_cards; ++i)	Card c = e.deal();

	try{
		Deck f;	
		for(int i = 0; i <= default_cards; ++i)
			Card m = f.deal();
		cerr << "Fail: Empty deck not detected" << endl;
	}
	catch(Deck::Deck_empty e){
		cerr <<  e.what() << endl;
	}
}
