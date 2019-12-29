#include "AI.h"

AI::AI(Map _map) : bestMove(nullptr), map(&_map) {
	this->terminal = new bool* [_map.getLength()];
	for (int i = 0; i < _map.getLength(); ++i) {
		this->terminal[i] = new bool[_map.getWidth()];
	}
} 

int AI::minimax(int depth, bool isMaximizingPlayer) {
	//TODO:
	

	
}

void AI::isMoveLeft() {

}

AI::~AI() {
	for (int i = 0; i < map->getLength(); ++i) {
		delete[] terminal[i];
	}
	delete[] terminal;
}
