#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include "card.h"

using namespace std;

Card :: Card(): _rank{rand() % 10}, _suit((Suit)(rand()%3)) {}
Card :: Card(Suit s, Rank r) try: _suit(s), _rank(r)
{
	if (s > 'A' || r > 9)
		 throw runtime_error("Out of range: Check suit or card range");
} 
catch(runtime_error &error)
{
	cerr << error.what() << endl;
}

Suit Card :: suit(){ return _suit; }
Rank Card :: rank(){ return _rank; }

string Card :: card_to_string(){
	string ret = "";
	ret += _suit == U ? 'U' : ((_suit == T) ? 'T': 'A');
	ret += _rank + '0';
	return ret;
}
