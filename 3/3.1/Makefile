CXXFLAGS += --std=c++11

main: main.o card.o deck.o
	${CXX} ${CXXFLAGS} -o main main.o deck.o card.o
main.o: main.cpp *.h
	${CXX} ${CXXFLAGS} -c main.cpp
deck.o: deck.cpp *.h
	${CXX} ${CXXFLAGS} -c deck.cpp
card.o: card.cpp *.h
	${CXX} ${CXXFLAGS} -c card.cpp
clean:
	-rm -f *.gch *.o a.out
