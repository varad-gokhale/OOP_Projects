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

		std::string card_to_string();

	private:
		Suit _suit;
		Rank _rank;
};

#endif
