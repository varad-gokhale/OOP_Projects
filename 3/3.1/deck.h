#ifndef __DECK_H
#define __DECK_H

#include <vector>
#include <exception>
#include "helper.h"
#include "card.h"

class Deck{
	public:
		class Deck_empty: public std::exception{
			public:
			  const char* what() const noexcept {
				return "Deck is empty";
			}
		};
		Deck(int cards = 10);
		Card deal();
	private:
		std::vector<Card> deck;
};
#endif
