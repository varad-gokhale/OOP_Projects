#include <iostream>
#include "vehicle.h"
#include "gas_vehicle.h"


Gas_vehicle :: Gas_vehicle(int year, std::string make, std::string model, Body_style body_style, double p_miles_per_gallon, double p_max_gallons):Vehicle::Vehicle(year, make, model, body_style)
{
	try{
		max_gallons = p_max_gallons;
		if(p_miles_per_gallon < 0)	throw std::runtime_error{"Miles cannot be less than 0"};
		miles_per_gallon = p_miles_per_gallon;
	}
	catch(std::runtime_error& e){
		std::cerr << e.what() << std::endl;
		std::cerr << "exiting.." << std::endl;
		exit(1);
	}
}

double Gas_vehicle::gallons_consumed(double miles)
{
	double ret;
	try{
		ret = miles/miles_per_gallon;
		if(ret > max_gallons)	throw std::runtime_error{"gallons consumed more than max_gallons"};
	}
	catch(std::runtime_error& e){
		std::cerr << e.what() << std::endl;
		std::cerr << "exiting.." << std::endl;
		exit(1);
	}
	return ret;
}
