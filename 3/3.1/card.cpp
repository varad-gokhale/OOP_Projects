#include <iostream>
#include <cstdlib>
#include "card.h"

using namespace std;

Card :: Card(): _rank{rand() % 10}, _suit((Suit)(rand()%3)) {}
Card :: Card(Suit s, Rank r): _suit(s), _rank(r) {}


Suit Card :: suit(){ return _suit; }
Rank Card :: rank(){ return _rank; }

string Card :: card_to_string(){
	string ret = "";
	ret += _suit == U ? 'U' : ((_suit == T) ? 'T': 'A');
	ret += _rank + '0';
}
