#include <queue>

struct position{
	int row;
	int col;
	queue<int> id;
};

void insertVehicle(position& p, int id);

void addInfo(position& p, int row, int col);

bool cmp(position p1, position p2);
