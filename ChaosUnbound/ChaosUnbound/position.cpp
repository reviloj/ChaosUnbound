#include "position.h"
#include "stdInclude.h"

ScreenPos::ScreenPos(int x, int y) : x(x), y(y) { }

HexPos::HexPos(int id[]) : id{ id[0], id[1] } {};
HexPos::HexPos(int x, int y) : id{ x, y } {};
int * HexPos::getid()
{
	return id;
}
// returns the value of the i'th id
int HexPos::operator[](unsigned int i) {
	if (i < 2)
		return this->getid()[i];
	else
		return -1;
}
bool HexPos::operator==(HexPos other) {
	return other[0] == this->id[0] && other[1] == this->id[1];
}
HexPos HexPos::getDirection(HexPos origin, HexPos target) {
	int x = target[0] - origin[0];
	int y = target[1] - origin[1];

	if (x == 0 || y == 0 || x / y == -1) {
		if (x == 0) {
			x = 0;
			y = y / abs(y);
		}
		else {
			x = x / abs(x);
			y = 0;
		}
	}
	else if (x > 0 && y > 0) {
		x = 1;
		y = 0;
	}
	else if (x < 0 && y > 0 && abs(x) < abs(y)) {
		x = 0;
		y = 1;
	}
	else if (x < 0 && y > 0 && abs(x) > abs(y)) {
		x = -1;
		y = 1;
	} 
	else if (x < 0 && y < 0) {
		x = -1;
		y = 0;
	}
	else if (x > 0 && y < 0 && abs(x) < abs(y)) {
		x = 0; 
		y = -1;
	}
	else if (x > 0 && y < 0 && abs(x) > abs(y)) {
		x = 1;
		y = -1;
	}

	return HexPos(x, y);
}
std::string HexPos::toString() {
	return std::to_string(id[0]) + ", " + std::to_string(id[1]);
}
