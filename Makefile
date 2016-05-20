#Makefile
all: work clean

work:
	mkdir run
	g++ -std=c++0x -c -o ./run/algorytmy.o ./src/algorytmy.cpp
	g++ -std=c++0x -o ./run/asd ./run/algorytmy.o ./main/main.cpp
	./example.sh

clean:
	rm -rv ./run/*.o
