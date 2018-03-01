/*
 * HashCode 2018
 * HSC team
 */


// Struct with the information of each ride

struct ride {
	int startRow;
	int startColumn;
	int finishRow;
	int finishColumn;
	int earliestStart;
	int latestFinish;
	int distance;
};

void enterInfoRide(int a, int b, int x, int y, int earliest, int latest);
