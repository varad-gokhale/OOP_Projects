#include <iostream>
#include "deck.h"
#include "card.h"
#include "helper.h"

using namespace std;

int main(){
	int cards = 30;
	Deck d(cards);
	for(int i = 0; i < cards; ++i)
		cout << d.deal().card_to_string() + " ";
	cout << endl;
}

