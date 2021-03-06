// ChaosUnbound.cpp : Defines the entry point for the console application.
//

#include "stdInclude.h"
#include <vector>
#include "aoeShape.h"
#include "position.h"


int main()
{
	srand(time(NULL));
	AoeShape* cone = &Hexagon(1);
	std::vector<HexPos> tiles = cone->getTiles(HexPos(0, 0), HexPos(-1, 2));
	for (std::vector<HexPos>::iterator it = tiles.begin(); it != tiles.end(); ++it) {
		std::cout << it->toString() << " ~ " << std::endl;
	}
	
    return 0;
}

