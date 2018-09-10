#include <iostream>
#include "deck.h"
#include "card.h"
#include "helper.h"

using namespace std;

int main(){
	Deck d(20);
	for(int i = 0; i < 20; ++i)
		card_to_string(d.deal());
}
