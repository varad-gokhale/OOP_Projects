CXXFLAGS += --std=c++11

main: main.o Gas_vehicle.o Electric_vehicle.o
	${CXX} ${CXXFLAGS} -o main main.o deck.o card.o
main.o: main.cpp *.h
	${CXX} ${CXXFLAGS} -c main.cpp
Gas_vehicle.o: Gas_vehicle.cpp *.h
	${CXX} ${CXXFLAGS} -c Gas_vehicle.cpp
Electric_vehicle.o: Electric_vehicle.cpp *.h
	${CXX} ${CXXFLAGS} -c Electric_vehicle.cpp
clean:
	-rm -f *.gch *.o a.out main

