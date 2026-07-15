CXX = g++
CXXFLAGS = -g -O2 -std=c++11 -Wall -Wextra

SHELL := powershell.exe

all: main.exe BFS.o

main.exe: main.o BFS.o
	$(CXX) -o main.exe main.o BFS.o

main.o: main.cpp BFS.h
	$(CXX) $(CXXFLAGS) -c main.cpp

BFS.o: BFS.cpp BFS.h
	$(CXX) $(CXXFLAGS) -c BFS.cpp

run:
	main.exe

clean: rm *.o, main.exe
