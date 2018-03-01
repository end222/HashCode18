#include <iostream>
#include <queue>
#include <list>

#include "Parser/parser.h"
#include "Vehicle/vehicle.h"
#include "Position/position.h"

using namespace std;



int main(){
	simulation s;
	readInput(s);

	position p;
	addInfo(p, 0, 0);
	for(int i=0; i<s.vehicles; i++){
		insertVehicle(p, i);
	}
	list<position> first;
	first.assign(1, p);

	//Arrays of information for each step
	queue<vehicle> freed[s.steps];

	for(int i=0; i<s.steps; i++){
		//Check for freed cars
		vehicle v;
		while(!freed[i].empty()){
			v=freed[i].front();
			//Añadir a intersecciones
			//Comprobamos si existe
			position pAux;
			for (list<position>::iterator it=first.begin(); it != first.end(); ++it){
				pAux=*it;
				if(v.rowEnd==pAux.row && v.colEnd==pAux.col){
					insertVehicle(position& p, int )
				}
			}


			freed[i].pop();
		}

	}
}
