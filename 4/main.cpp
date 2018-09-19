#include <iostream>
#include <vector>
#include "vehicle.h"
#include "gas_vehicle.h"
#include "electric_vehicle.h"

int main(){
	std::vector<double> gas_prices = {2,2.25,2.50,3,4};
	std::vector<double> kwh_prices = {0.05,0.08,0.11,0.13,0.15};

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
	for(Electric_vehicle d: evs){
		std::cout << d.vehicle_to_string() <<" cost per mile" <<  std::endl;		
		for(double& price:kwh_prices){
			std::cout << "	at price " << price << " per kwh -> " << d.kwh_consumed(100)*price << std::endl;
		}
	}
	std::cout << std::endl;
	for(Gas_vehicle g: ice){
		std::cout << g.vehicle_to_string() << " cost per mile" << std::endl;
		for(double& price: gas_prices){
			std::cout << "	at price " << price << " per gallon -> " << g.gallons_consumed(100)*price << std::endl;
		}
	}
}
