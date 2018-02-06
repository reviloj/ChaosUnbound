#pragma once

#include <vector>

class HexPos;

class AoeShape {
public:
	virtual std::vector<HexPos> getTiles(HexPos origin, HexPos target) =0;
};

class Cone : public AoeShape {
	int length;
public:
	Cone(int x);
	std::vector<HexPos> getTiles(HexPos origin, HexPos target);
};

class Arc : public AoeShape {
	int length;
public:
	Arc(int x);
	std::vector<HexPos> getTiles(HexPos origin, HexPos target);
};

class Hexagon : public AoeShape {
	int radius;
public:
	Hexagon(int x);
	std::vector<HexPos> getTiles(HexPos origin, HexPos target);
};