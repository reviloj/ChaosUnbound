#include "aoeShape.h"
#include "position.h"
#include "stdInclude.h"



Cone::Cone(int x) : length(x) {};

std::vector<HexPos> Cone::getTiles(HexPos origin, HexPos target) {
	std::vector<HexPos> tiles;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < i + 1; j++) {

		}
	}
}