#include "AI.h"

AI::AI(Map _map) : bestMove(0), map(_map) {
} 

int AI::evaluateValue(int depth) {
	//ROW
	for (int i = 1; i <= map->getLength(); ++i) {
		if (map->getMap()[i][1] == map->getMap[i][2] && map->getMap()[i][1] == map->getMap[i][3]) {
			if (map->getMap()[i][1] == 'x') return  MAX_WIN - depth;
			return MIN_WIN + depth;
		}
	}

	//COL
	for (int i = 1; i <= map->getWidth(); ++i) {
		if (map->getMap()[1][i] == map->getMap[2][i] && map->getMap()[1][i] == map->getMap[1][i]) {
			if (map->getMap()[i][1] == 'x') return  MAX_WIN - depth;
			return MIN_WIN + depth;
		}
	}

	//Diagon
	if (map->getMap()[1][1] == map->getMap()[2][2] && map->getMap[1][1] == map->getMap()[3][3])
		if (map->getMap()[1][1] == 'x') return  MAX_WIN - depth;
	return MIN_WIN + depth;
	if (map->getMap()[1][3] == map->getMap()[2][2] && map->getMap[1][3] == map->getMap()[3][1])
		if (map->getMap()[1][1] == 'x') return  MAX_WIN - depth;
	return MIN_WIN + depth;

	return 0;
}

bool AI::isMoveLeft() {
	for (int i = 0; map->getLength(); ++i) {
		for (int j = 0; j < map->getWidth(); ++j) {
			if (!map->getCheckNode()[i][j]) return false;
		}
	}
	return true;
}

int AI::minimax(int depth, bool isMaximizingPlayer) {
	int value;
	if (isMoveLeft()) return evaluateValue(depth);
	
	if (isMaximizingPlayer) {
		for (int i = 0; map->getLength(); ++i) {
			for (int j = 0; j < map->getWidth(); ++j) {
				if (!map->getCheckNode[i][j]){
					map->getMap()[i][j] = 'x';
					map->getCheckNode()[i][j] = true;
					value = minimax(depth + 1, false);
					bestMove = std::max(bestMove, value);
					map->getCheckNode()[i][j] = false;
					map->getMap()[i][j] = '0';
				}
			}
		}
	}

	else
		for (int i = 0; map->getLength(); ++i) {
			for (int j = 0; j < map->getWidth(); ++j) {
				if (!map->getCheckNode()[i][j]) {
					map->getCheckNode()[i][j] = true;
					map->getMap()[i][j] = 'o';
					value = minimax(depth + 1, true);
					bestMove = std::min(bestMove, value);
					map->getCheckNode()[i][j] = false;
					map->getMap()[i][j] = '0';
				}
			}
		}

}
AI::~AI() {
	
}
