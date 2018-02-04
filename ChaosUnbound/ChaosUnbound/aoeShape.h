#pragma once

#include <vector>

class HexPos;

class AoeShape {
public:
	virtual std::vector<HexPos> getTiles(HexPos origin, HexPos target) =0;
};

class Cone: public AoeShape {
	int length;

public:
	Cone(int x);
	std::vector<HexPos> getTiles(HexPos origin, HexPos target);
};