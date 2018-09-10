#ifdef __DECK_H
#define __DECK_H

#include <vector>
#include "helper.h"
#include "card.h"

class Deck{
	public:
		Deck(int cards);
		Card deal();
	private:
		vector<Card> deck;

#endif
