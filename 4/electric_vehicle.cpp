#include "vehicle.h"
#include "gas_vehicle.h"


Electric_vehicle :: Electric_vehicle(int year, std::string make, std::string model, Body_style body_style, double miles_per_kwh, double max_kwh) 
{
	try{
		Vehicle(year, make, model, body_style);
		max_kwh = max_kwh;
		if(miles_per_kwh < 0)	throw runtime_error{"Miles cannot be less than 0"};
		miles_per_kwh = miles_per_kwh;
	}
	catch(runtime_error &e){
		cerr << "e.what()" << endl;
		cerr << "exiting.." << endl;
		exit(1);
	}
}

double Electric_vehicle::kwhs_consumed(double miles)
{
	double ret;
	try{
		ret = miles/miles_per_kwh;
		if(ret > max_kwh)	throw runtime_error{"kwhs consumed more than max_kwh"};
	}
	catch(runtime_exception &e){
		cerr << e.what() << endl;
		cerr << "exiting.." << endl;
		exit(1);
	}
	return ret;
}
