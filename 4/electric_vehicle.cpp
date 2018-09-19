#include <iostream>
#include "vehicle.h"
#include "gas_vehicle.h"
#include "electric_vehicle.h"

Electric_vehicle :: Electric_vehicle(int year, std::string make, std::string model, Body_style body_style, double mpkwh, double kwh_max): Vehicle(year, make, model, body_style)
{
	try{
		max_kwh = kwh_max;
		if(mpkwh < 0)	throw std::runtime_error{"Miles cannot be less than 0"};
		miles_per_kwh = mpkwh;
	}
	catch(std::runtime_error& e){
		std::cerr << "e.what()" << std::endl;
		std::cerr << "exiting.." << std::endl;
		exit(1);
	}
}

double Electric_vehicle::kwh_consumed(double miles)
{
	double ret;
	try{
		ret = miles/miles_per_kwh;
		if(ret > max_kwh)	throw std::runtime_error{"kwhs consumed more than max_kwh"};
	}
	catch(std::runtime_error& e){
		std::cerr << e.what() << std::endl;
		std::cerr << "exiting.." << std::endl;
		exit(1);
	}
	return ret;
}
