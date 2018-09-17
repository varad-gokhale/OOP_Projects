#ifndef __GAS_VEHICLE_H
#define __GAS_VEHICLE_H

#include "vehicle.h"
#include <stdexcept>

class Gas_vehicle: public Vehicle{
	
	public:
		Gas_vehicle(int year, std::string make, std::string model, Body_style body_style, double miles_per_gallon, double max_gallons);
		double gallons_consumed(double miles);
	private:
		double miles_per_gallon;
		double max_gallons;		
}

#endif
