#pragma once
#include "Map.h"

class AI {
private:
	Map* map;
	int* bestMove;
	bool** terminal;
public:
	AI(Map _map);
	~AI();
	int minimax(int depth, bool isMaximizer);
	void isMoveLeft();
};

