#ifndef __ELECTRIC_VEHICLE_H
#define __ELECTRIC_VEHICLE_H

#include "vehicle.h"
#include <stdexcept>

class Electric_vehicle: public Vehicle{
	
	public:
		Electric_vehicle(int year, std::string make, std::string model, Body_style body_style, double miles_per_kwh, double max_kwh);
		double kwh_consumed(double miles);
	private:
		double miles_per_kwh;
		double max_kwh;		
}

#endif
