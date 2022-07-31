SRC := $(wildcard *.cpp)
OBJ := $(SRC:.cpp=.o)

CXXFLAGS := -Wextra -Wall -std=c++17

all: fizzbuzz

fizzbuzz: $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

fizzbuzzdivisor.o: fizzbuzzdivisor.cpp fizzbuzzdivisor.hpp
range.o: range.cpp range.hpp
fizzbuzz.o: fizzbuzz.cpp fizzbuzz.hpp fizzbuzzdivisor.hpp range.hpp
main.o: main.cpp fizzbuzz.hpp
