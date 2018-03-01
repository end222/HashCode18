#include "position.h"


void insertVehicle(position& p, int id){
	p.id.push(id);
}

void addInfo(position& p, int row, int col){
	p.row=row;
	p.col=col;
}

bool cmp(position p1, position p2){
	return (p1.row==p2.row && p1.col==p2.col);
}
