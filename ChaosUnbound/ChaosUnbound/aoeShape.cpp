#include "aoeShape.h"
#include "position.h"
#include "stdInclude.h"

Cone::Cone(int x) : length(x) {};
std::vector<HexPos> Cone::getTiles(HexPos origin, HexPos target) {
	std::vector<HexPos> tiles;
	tiles.push_back(target);
	HexPos direction = HexPos::getDirection(origin, target);
	std::cout << "D:" << direction.toString() << std::endl;

	for (int i = 0; i < length; ++i) {
		tiles.push_back(HexPos(target[0] + direction[0], target[1] + direction[1]));
		for (int j = 0; j < i + 1; ++j) {
			tiles.push_back(HexPos(
				target[0] + direction[0] - (direction[0] + direction[1]),
				target[1] + direction[0] + direction[1]
			));
			target = tiles.at((i + 1) + j);
		}
	}

	return tiles;
}

Arc::Arc(int x) : length(x) {}
std::vector<HexPos> Arc::getTiles(HexPos origin, HexPos target){
	std::vector<HexPos> tiles;
	tiles.push_back(target);
	HexPos direction = HexPos::getDirection(origin, target);
	std::cout << "D:" << direction.toString() << std::endl;

	for (int i = 0; i < length; ++i) {
		tiles.push_back(HexPos(
			target[0] + direction[1] * (i + 1), 
			target[1] + -(direction[0] + -direction[1]) * (i + 1)
		));
		tiles.push_back(HexPos(
			target[0] + -(direction[0] + direction[1]) * (i + 1), 
			target[1] + direction[0] * (i + 1)
		));
	}

	return tiles;
};

Hexagon::Hexagon(int x) : radius(x) {};
std::vector<HexPos> Hexagon::getTiles(HexPos origin, HexPos target) {
	std::vector<HexPos> tiles;
	tiles.push_back(target);
	HexPos direction = HexPos::getDirection(origin, target);
	std::cout << "D:" << direction.toString() << std::endl;

	for (int i = 0; i < radius; ++i) {
		tiles.push_back(HexPos(target[0] + 1, target[1]));
		target = tiles.back();
		for (int j = 0; j < i + 1; ++j) {
			tiles.push_back(HexPos(target[0] - 1, target[1] + 1));
			target = tiles.back();
		}
		for (int j = 0; j < i + 1; ++j) {
			tiles.push_back(HexPos(target[0] - 1, target[1]));
			target = tiles.back();
		}
		for (int j = 0; j < i + 1; ++j) {
			tiles.push_back(HexPos(target[0], target[1] - 1));
			target = tiles.back();
		}
		for (int j = 0; j < i + 1; ++j) {
			tiles.push_back(HexPos(target[0] + 1, target[1] - 1));
			target = tiles.back();
		}
		for (int j = 0; j < i + 1; ++j) {
			tiles.push_back(HexPos(target[0] + 1, target[1]));
			target = tiles.back();
		}
		for (int j = 0; j < i; ++j) {
			tiles.push_back(HexPos(target[0], target[1] + 1));
			target = tiles.back();
		}
		target = HexPos(tiles.back()[0], tiles.back()[1] + 1);
	}

	return tiles;
}