#pragma once
#include "Map.h"
#include <algorithm>

#define MAX_WIN 10
#define MIN_WIN -10

class AI {
private:
	Map* map;
	int bestMove;
public:
	AI(Map _map);
	~AI();
	int minimax(int depth, bool isMaximizer);
	bool isMoveLeft();
	int evaluateValue(int depth);
};

