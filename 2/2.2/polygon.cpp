#include <iostream>

using namespace std;

class Polygon
{
	int sides;
	int lengths[100];
    public:
	Polygon(int s): lengths{}, sides{s}
	{
	}

	void add_side(double length){
		lengths[sides] = length;
		sides += 1;
	}
	double get_perimeter(){
		double perimeter = 0;
		for(int i = 0; i < sides; ++i){
			perimeter += lengths[i];
		}
		return perimeter;
	 }
	int get_sides(){ return sides; }
	double get_area(double apothem)	{ return (0.5 * apothem * get_perimeter()); }
	
};

