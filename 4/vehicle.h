#ifndef __VEHICLE_H
#define __VEHICLE_H

#include "helper.h"
#include <stdexcept>

class Vehicle{
	public: 
		Vehicle(int year, std::string make, std::string model, Body_style body_style);
		std::string vehicle_to_string();
		int get_year();
		std::string get_make();
		std::string get_model();
		Body_style get_body_style();
	private:
		std::string make;
		std:: string model;
		int year;
		Body_style body_style;
		std::string vehicle_to_str_year(int year);
		std::string vehicle_to_str_body_style(Body_style body_style);
};

#endif
