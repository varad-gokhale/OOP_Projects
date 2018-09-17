#include "vehicle.h"
#include "gas_vehicle.h"


Gas_vehicle :: Gas_vehicle(int year, std::string make, std::string model, Body_style body_style, double miles_per_gallon, double max_gallons) 
{
	try{
		Vehicle(year, make, model, body_style);
		max_gallons = max_gallons;
		if(miles_per_gallon < 0)	throw runtime_error{"Miles cannot be less than 0"};
		miles_per_gallon = miles_per_gallon;
	}
	catch(runtime_error &e){
		cerr << "e.what()" << endl;
		cerr << "exiting.." << endl;
		exit(1);
	}
}

double Gas_vehicle::gallons_consumed(double miles)
{
	double ret;
	try{
		ret = miles/miles_per_gallon;
		if(ret > max_gallons)	throw runtime_error{"gallons consumed more than max_gallons"};
	}
	catch(runtime_exception &e){
		cerr << e.what() << endl;
		cerr << "exiting.." << endl;
		exit(1);
	}
	return ret;
}
