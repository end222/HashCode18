CC = g++

all: main.cpp ride.o simulation.o parser.o
	$(CC) main.cpp ride.o simulation.o parser.o -o main

ride.o: Ride/ride.h Ride/ride.cc
	$(CC) Ride/ride.h Ride/ride.cc -c

simulation.o: Simulation/simulation.h Simulation/simulation.cc
	$(CC) Simulation/simulation.h Simulation/simulation.cc -c

parser.o: Parser/parser.cc Parser/parser.h
	$(CC) Parser/parser.cc Parser/parser.h -c

clean:
	rm -rf main
	rm -rf *.o
	rm */*.gch
