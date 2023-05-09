CXX = g++
CXXFLAGS = -Wall -std=c++11

all: graph_test
graph_test: main.o graph.o
	$(CXX) $(CXXFLAGS) -o graph_test main.o graph.o

main.o: main.cpp graph.h
	$(CXX) $(CXXFLAGS) -c main.cpp

graph.o: graph.cpp graph.h
	$(CXX) $(CXXFLAGS) -c graph.cpp

clean:
	rm -f *.o graph_test

