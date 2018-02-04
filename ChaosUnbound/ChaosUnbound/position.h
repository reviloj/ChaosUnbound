#pragma once

class ScreenPos {
	int x;
	int y;
public:
	ScreenPos(int x, int y);
	int getX();
	int getY();
};

class HexPos {
	int id[2]; // id[0] is in the direction of the cross section of the board (cutting it in half between players), id[1] points 60 degrees clockwise of id[0]
	ScreenPos screenPos;
public:
	HexPos(int id[]);
	HexPos(int x, int y);
	int* getid();
	ScreenPos getScreenPos();
};
