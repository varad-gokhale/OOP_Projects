CXXOPTS += --std=c++17

polygon_vector: polygon_vector.o main.o
	$(CXX) $(CXXOPTS) -o polygon_vector polygon_vector.o main.o

clean:
	rm -f *.o polygon_vector
