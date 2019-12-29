#pragma once

class Map
{
private:
	int** matrix;
	short** checkNode; // i want to distinguish maximizer(1) and minimizer(2) 
	const int length;
	const int width;
public:
	Map() = delete;
	Map(int _length, int _width);
	~Map();
	void creatMap();
	int** getMap();
	short** getCheckNode();
	int getWidth();
	int getLength();
};

