#include <iostream>
#include "deck.h"
#include "card.h"
#include "helper.h"

using namespace std;

int main(){
	for(int i = 0; i < 20; ++i)
		cout << Card().card_to_string() << " ";
	cout << endl;
}
