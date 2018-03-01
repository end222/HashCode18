struct simulation {
	int columns; // NUmber of columns
	int vehicles; // NUmber of vehicles
	int rides; // NUmber of rides
	int bonus; // Bonus for starting on time
	int steps; // Number of steps
};

void enterInfoSimulation(simulation& s, int column, int vehicles, int rides, int bonus, int steps);
