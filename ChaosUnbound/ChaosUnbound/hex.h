#pragma once

#include "position.h"
#include "enum.h"

class Card;

class HexTile {
	HexPos position;
	Card* currentCard;
protected:
	TerrainType type = Normal;
public:
	HexTile(HexPos p);
	HexPos getPosition();
	Card* getCurrentCard();
	TerrainType getTerrainType();
};

class UnpassableTile : public HexTile {
public:
	UnpassableTile(HexPos p);
};

class BonusTile : public HexTile {
	int energyBonus;
	int drawBonus;
	float chance;
public:
	BonusTile(HexPos p);
	bool rollBonus();
	int getEnergyBonus();
	int getDrawBonus();
};