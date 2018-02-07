#pragma once
#include <string>

struct ScreenPos {
	int x;
	int y;
	ScreenPos(int x, int y);
};

class HexPos {
	int id[2]; // id[0] is in the direction of the cross section of the board (cutting it in half between players), id[1] points 60 degrees clockwise of id[0]
public:
	HexPos(int id[]);
	HexPos(int x, int y);
	int operator[](unsigned int i); 
	bool operator==(HexPos other);
	int* getid();
	static HexPos getDirection(HexPos origin, HexPos target);
	std::string toString();
};
