#Makefile
all: main

main:
	mkdir run
	$(CXX) -pthread -std=c++11 -Wall -Wextra -c -o ./run/algorytmy.o ./src/algorytmy.cpp
	$(CXX) -pthread -std=c++11 -Wall -Wextra -o ./run/asd ./run/algorytmy.o ./tests/rangeTest.cpp
	./runTests.sh
