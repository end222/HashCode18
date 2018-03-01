CC = g++

all: main.cpp ride.o simulation.o
	$(CC) main.cpp -o main

ride.o: Ride/ride.h Ride/ride.cc
	$(CC) Ride/ride.h Ride/ride.cc -c

simulation.o: Simulation/simulation.h Simulation/simulation.cc
	$(CC) Simulation/simulation.h Simulation/simulation.cc -c

clean:
	rm -rf main
	rm -rf *.o
	rm */*.gch
