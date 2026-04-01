CXX = g++
CXXFLAGS = -g -O2 -Wall -Wextra -std=c++14

SHELL := powershell

all: main.exe

main.exe: main.o Benchmark.o LinearSearch.o BinarySearch.o
	$(CXX) -o main.exe main.o Benchmark.o LinearSearch.o BinarySearch.o

main.o: main.cpp Benchmark.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Benchmark.o: Benchmark.cpp Benchmark.h
	$(CXX) $(CXXFLAGS) -c Benchmark.cpp

LinerSearch.o: LinearSearch.cpp LinearSearch.h
	$(CXX) $(CXXFLAGS) -c LinearSearch.cpp

BinarySearch.o: BinarySearch.cpp BinarySearch.h
	$(CXX) $(CXXFLAGS) -c BinarySearch.cpp


run:
	main.exe

clean:
	rm *.o, main.exe
