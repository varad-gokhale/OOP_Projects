#include <iostream>
#include <vector>
#include "vehicle.h"
#include "gas_vehicle.h"
#include "electric_vehicle.h"

int main(){
	std::vector<Electric_vehicle> evs = {
		Electric_vehicle{2014, "Tesla", "Model S 85", Body_style::SEDAN, 3.12, 85}
	};
	std::vector<Gas_vehicle> ice = {
		Gas_vehicle{2017, "Toyota", "RAV4", Body_style::CROSSOVER, 26, 15.9}
	};
	for(Electric_vehicle d: evs){	cout << d.kwh_consumed(100) << endl;	}
	for(Gas_vehicle g: ice){	cout << g.gallons_consumed(100) << endl;	}
}
