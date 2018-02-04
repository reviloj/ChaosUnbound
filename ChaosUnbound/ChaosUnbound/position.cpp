#include "position.h"

ScreenPos::ScreenPos(int x, int y) : x(x), y(y) { }
int ScreenPos::getX() {
	return x;
}
int ScreenPos::getY() {
	return y;
}
int * HexPos::getid()
{
	return id;
}

HexPos::HexPos(int id[]) : id{ id[0], id[1] }, screenPos(id[0], id[1]) {};
HexPos::HexPos(int x, int y) : id{ x, y }, screenPos(x, y) {};
ScreenPos HexPos::getScreenPos() {
	return screenPos;
}