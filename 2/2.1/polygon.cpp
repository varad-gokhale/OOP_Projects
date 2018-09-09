#include <iostream>

using namespace std;

class Polygon
{
	double perimeter = 0.0;
	int sides = 0;
    public:
	void add_side(double length){
		perimeter += length;
		sides += 1;
	}
	double get_perimeter(){ return perimeter; }
	int get_sides(){ return sides; }
	
};

