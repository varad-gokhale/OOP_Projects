#include <iostream>
#include "helper.h"
#include "vehicle.h"

Vehicle :: Vehicle(int year, std::string make, std::string model, Body_style body_style) try: year(year), make(make), model(model), body_style(body_style) {
	if(year < 0 || make == "" || model == "" || (body_style != Body_style :: SEDAN && body_style != Body_style::HATCHBACK && body_style != Body_style::MINIVAN && body_style != Body_style::SUV &&  body_style != Body_style::CROSSOVER && body_style !=Body_style::TRUCK))
		throw std::runtime_error{"Out of range: Check vehicle year, make, model and body_style"};


}
catch(std::runtime_error& e){
	std::cerr << "Runtime exception " << e.what() << std::endl;
	std::cerr << "Exiting..." << std::endl;
	exit(1);
}

std::string Vehicle :: vehicle_to_str_year(int year){
	
	int count = 0;
	std::string ret = "";
	if(year == 0)	return "0";
	
	while(year){
		ret += (year%10) + '0';
		year /= 10;
		count += 1;
	}
	for(int i = 0; i < count/2; ++i){
		char temp = ret[i];
		ret[i] = ret[count-1-i];
		ret[count-1-i] = ret[i];
	}
	return ret;
}

std::string Vehicle :: vehicle_to_str_body_style(Body_style body_style){
	switch(body_style){
		case Body_style::SEDAN:
			return "SEDAN";
		case Body_style::HATCHBACK:
			return "HATCHBACK";
		case Body_style::MINIVAN:
			return "MINIVAN";
		case Body_style::SUV:
			return "SUV";
		case Body_style::CROSSOVER:
			return "CROSSOVER";
		case Body_style::TRUCK:
			return "TRUCK";
	}	
}
std::string Vehicle :: to_string(){
	return "year: " + vehicle_to_str_year(year) + " make: " + make + " model: " + model + " Body Style: " + vehicle_to_str_body_style(body_style); 
}

int Vehicle::get_year(){	return year;	}
std::string Vehicle :: get_make(){	return make;	}
std::string Vehicle :: get_model(){	return model;	}
Body_style Vehicle :: get_body_style(){	return body_style; }

