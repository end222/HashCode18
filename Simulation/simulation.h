#include "../Ride/ride.h"

struct simulation {
	int columns; // NUmber of columns
	int rows;
	int vehicles; // NUmber of vehicles
	int rides; // NUmber of rides
	int bonus; // Bonus for starting on time
	int steps; // Number of steps
	int remainingRides;
	ride allRides[10000]; // All the rides
};

void enterInfoSimulation(simulation& s,int row, int column, int vehicles, int rides, int bonus, int steps);

void addRide(simulation& s, ride r);
