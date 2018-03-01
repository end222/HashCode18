#include "simulation.h"

void enterInfoSimulation(simulation& s,int row, int column, int vehicles, int rides, int bonus, int steps){
	s.columns = column;
	s.rows = row;
	s.vehicles = vehicles;
	s.rides = rides;
	s.bonus = bonus;
	s.steps = steps;
	s.remainingRides = 0;
}

void addRide(simulation& s, ride r){
	s.allRides[s.remainingRides] = r;
	s.remainingRides++;
}
