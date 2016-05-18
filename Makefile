#Makefile
all: work

work:
	mkdir run
	g++ -pthread -std=c++0x -Wall -Wextra -c -o ./run/algorytmy.o ./src/algorytmy.cpp
	g++ -pthread -std=c++0x -Wall -Wextra -o ./run/asd ./run/algorytmy.o ./main/main.cpp
