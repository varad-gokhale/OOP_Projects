CXXOPTS += --std=c++17

polygon: polygon.o main.o
	$(CXX) $(CXXOPTS) -o polygon polygon.o main.o

clean:
	rm -f *.o polygon
