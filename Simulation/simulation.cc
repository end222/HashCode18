#include "simulation.h"

void enterInfoSimulation(simulation& s, int column, int vehicles, int rides, int bonus, int steps){
	s.columns = column;
	s.vehicles = vehicles;
	s.rides = rides;
	s.bonus = bonus;
	s.steps = steps;
}
