#include <iostream>
#include "Map.h"
#include "Node.h"

//maximizer = 1
//minimizer = 2
//9 node
//best move => central map
// map: axa

int main() {
	Map map(3, 3);
	map.creatMap();
	for (int i = 1; i <= map.getLength(); ++i) {
		for (int j = 1; j <= map.getWidth(); ++j) {
			map.getMap()[i][j] = 'x';
			std::cout << map.getMap()[i][j] << ' ';
		}
		std::cout << std::endl;
	}

}