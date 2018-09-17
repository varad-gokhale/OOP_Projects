#include "vehicle.h"

Vehicle :: Vehicle(int year, std::string make, std::string model, Body_style body_style) try: year(year), make(make), model(model), body_style(body_style) {
	if(year < 0 || make == "" || model == "" || body_style != SEDAN || body_style != HATCHBACK || body_style != MINIVAN ||body_style != SUV || body_style != CROSSOVER)
		throw runtime_exception{"Out of range: Check vehicle year, make, model and body_style"};


}
catch(runtime_exception &e){
	cerr << "Runtime exception " << e.what() << endl;
	cerr << "Exiting..." << endl;
	exit(1);
}

std::string Vehicle :: vehicle_to_str_year(int year){
	int year = 0;
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
		case SEDAN:
			return "SEDAN";
		case HATCHBACK:
			return "HATCHBACK";
		case MINIVAN:
			return "MINIVAN";
		case SUV:
			return "SUV";
		case CROSSOVER:
			return "CROSSOVER";
	}	
}
std::string Vehicle :: to_string(){
	return "year: " + vehicle_to_str_year(year) + " make: " + make + " model: " + model + " Body Style: " + vehicle_to_str_body_style(body_style); 
}

int Vehicle::get_year(){	return year;	}
std::string Vehicle :: get_make(){	return make;	}
std::string Vehicle :: get_model(){	return model;	}
Body_style Vehicle :: get_body_style(){	return body_style; }

