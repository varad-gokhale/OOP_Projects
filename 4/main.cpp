#include <iostream>
#include <vector>
#include "vehicle.h"
#include "gas_vehicle.h"
#include "electric_vehicle.h"

int main(){
	std::vector<Electric_vehicle> evs = {
		Electric_vehicle{2014, "Tesla", "Model S 85", Body_style::SEDAN, 3.12, 85},
		Electric_vehicle{2014, "Tesla", "Model 3 LR", Body_style::SEDAN, 4.13,75},
		Electric_vehicle{2018, "GM", "Bolt", Body_style::HATCHBACK, 3.58, 60},
		Electric_vehicle{2018, "Nissan", "LEAF SL", Body_style::HATCHBACK, 3.88, 40},
	};
	std::vector<Gas_vehicle> ice = {
		Gas_vehicle{2017, "Toyota", "RAV4", Body_style::CROSSOVER, 26, 15.9},
		Gas_vehicle{2018, "Ford", "F-150", Body_style::TRUCK, 21, 36},
		Gas_vehicle{2018,"Nissan","Rogue", Body_style::HATCHBACK,29,14.5},
		Gas_vehicle{2018,"Chrysler", "Pacifica", Body_style::MINIVAN, 22, 19},	
	};
	for(Electric_vehicle d: evs){	std::cout << d.kwh_consumed(100)*0.05 << std::endl;	}
	for(Gas_vehicle g: ice){	std::cout << g.gallons_consumed(100)*2 << std::endl;	}
}
