#include "../Simulation/simulation.h"
#include <string>
#include <string.h>
#include <iostream>

using namespace std;

void readInput(simulation& s){
	char line[100];
	cin.getline(line,100);
	char delim[] = " ";
	int i = 0;
	int simulationInfo[6];
	simulationInfo[i] = atoi(strtok(line, delim));
	while(i < 5){
		i++;
		simulationInfo[i] = atoi(strtok(NULL, delim));
	}
	int numRides = simulationInfo[3];
	enterInfoSimulation(s, simulationInfo[0],simulationInfo[1],simulationInfo[2],simulationInfo[3],simulationInfo[4],simulationInfo[5]);
	i = 0;
	int j;
	while(i < numRides){
		j = 0;
		cin.getline(line,100);
		simulationInfo[j] = atoi(strtok(line, delim));
		while(j < 5){
			j++;
			simulationInfo[j] = atoi(strtok(NULL,delim));
		}
		ride r;
		enterInfoRide(r, simulationInfo[0],simulationInfo[1],simulationInfo[2],simulationInfo[3],simulationInfo[4],simulationInfo[5]);
		addRide(s, r);
		i++;
	}
}

void writeOutput(){

}
