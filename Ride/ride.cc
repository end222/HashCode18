/*
 * HashCode 2018
 * HSC team
 */

#include "ride.h"
#include <cmath>


// Populate a ride struct

void enterInfoRide(ride& r,int a, int b, int x, int y, int earliest, int latest){
	r.startRow = a;
	r.startRow = b;
	r.startColumn = x;
	r.finishColumn = y;
	r.earliestStart = earliest;
	r.latestFinish = latest;
	r.distance = abs(a - x) + abs(b - y);
}
