#include <iostream>
#include "polygon.cpp"
using namespace std;

int main(){
	Polygon polygon;
	double side;
	while(1){
		cout << "Please enter side" << endl;
		cin >> side;
		if(side <= 0)	break;
		polygon.add_side(side);
	}
	cout << " This " << polygon.get_sides() << "-sided polygon has a perimeter of " << polygon.get_perimeter() << endl;
}
