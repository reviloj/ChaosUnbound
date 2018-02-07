#include "hex.h"
#include <random>

HexTile::HexTile(HexPos p) : position(p) {}
HexPos HexTile::getPosition() {
	return position;
}
Card* HexTile::getCurrentCard() {
	return currentCard;
}
TerrainType HexTile::getTerrainType() {
	return type;
}

UnpassableTile::UnpassableTile(HexPos p) : HexTile(p) { type = Unpassable; }

BonusTile::BonusTile(HexPos p) : HexTile(p) { type = Bonus; }
bool BonusTile::rollBonus() {
	return rand() % 2;
}
int BonusTile::getEnergyBonus() {
	return energyBonus;
}
int BonusTile::getDrawBonus() {
	return drawBonus;
}