#ifndef __CARD_H
#define __CARD_H

#include <iostream>
#include "helper.h"

class Card{
	public:
		Card();
		Card(Suit s, Rank r);
	//	class Invalid_rank_or_suit: global exception {};
		
		Suit suit();
		Rank rank();

		string card_to_string();

	private:
		_suit;
		_rank;
}

#endif
