#include <iostream>
#include <vector>
using namespace std;

class Polygon
{
	int sides;
	vector<double> lengths;
    public:
	Polygon(int s):  sides{s}
	{
	}

	void add_side(double length){
		lengths.push_back(length);
		sides += 1;
	}
	double get_perimeter(){
		double perimeter = 0;
		for(double t: lengths)	perimeter += t;	
		return perimeter;
	 }
	int get_sides(){ return sides; }
	double get_area(double apothem)	{ return (0.5 * apothem * get_perimeter()); }
	
};

