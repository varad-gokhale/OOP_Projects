#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include "card.h"
#include "helper.h"

using namespace std;

int main(){
	
	for(int i = U; i <= A; ++i){
		for(int j = 0; j < 10; ++j){
			cout <<	Card((Suit)i , (Rank)j).card_to_string() << endl;
		}
	}
	while(1){
		try{
			cout << "Random card is:" << Card((Suit)rand(), (Rank)rand()).card_to_string() << endl;
		}
		catch(runtime_error &e){
			cerr << "exiting program" << endl;
			exit(1);
		}
	}

}
