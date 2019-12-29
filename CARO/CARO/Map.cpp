#include "Map.h"

Map::Map(int _length = 1, int _width = 1) : length(_length), width(_width), 
											matrix(nullptr), 
											checkNode(nullptr)	{
}

void Map::creatMap() {
	if (this->matrix != nullptr) return;
	this->matrix = new char* [this->length + 1]{};
	this->checkNode = new bool* [this->length + 1]{};
	for (int i = 1; i <= length; ++i) {
		this->matrix[i] = new char[this->width]{};
		this->checkNode[i] = new bool[this->width]{};
		for (int j = 1; j <= width; ++j)
			this->checkNode[i][j] = '0';
	}
}


Map::~Map() {
	for (int i = 1; i <= this->length; ++i) {
		delete[] this->matrix[i];
		delete[] this->checkNode[i];
	}
	delete[] this->checkNode;
	delete[] this->matrix;
}

char**& Map::getMap() {
	return this->matrix;
}

bool** Map::getCheckNode() {
	return checkNode;
}

int Map::getWidth() {
	return this->width;
}

int Map::getLength() {
	return this->length;
}


