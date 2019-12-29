#pragma once

class Map
{
private:
	char** matrix;
	bool** checkNode; 
	const int length;
	const int width;
public:
	Map() = delete;
	Map(int _length, int _width);
	~Map();
	void creatMap();
	char**& getMap();
	bool** getCheckNode();
	int getWidth();
	int getLength();
};

