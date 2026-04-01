CXX = g++
CXXFLAGS = -g -O2 -Wall -Wextra -std=c++14

SHELL := powershell.exe

TARGET = main.exe

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS: .cpp = .o)

all = $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run:
	./$(TARGET)


clean:
	rm *.o, main.exe
