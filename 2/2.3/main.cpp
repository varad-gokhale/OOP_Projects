#include <iostream>
#include "polygon_vector.cpp"
using namespace std;

int main(){
	Polygon polygon(0);
	double side_len, apothem;
	while(1){
		cout << "Please enter side" << endl;
		cin >> side_len;
		if(side_len <= 0)	break;
		polygon.add_side(side_len);
	}

	cout <<" Please enter apothem" << endl;
	cin >> apothem;

	cout << "This " << polygon.get_sides() << "-sided polygon has a perimeter of " << polygon.get_perimeter() << endl;
	if(apothem > 0){
		cout << "Area is: "<< polygon.get_area(apothem) << endl;
	}
}
