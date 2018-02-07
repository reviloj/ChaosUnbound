#pragma once

#include <string>
#include <vector>
#include "enum.h"
#include "effect.h"

class Player;

class Card {
	int id;
	Player* player;
	std::string name;
	std::string cardDescription;
	CardType type;
	std::vector<int> position;
	int cost;
	std::vector<CardEffect*> effects;
	std::vector<PassiveEffect*> passives;
public:
	Card(int id, std::string n, std::string d, CardType t, int pos, int c, std::vector<CardEffect*> e, std::vector<PassiveEffect*> p);
	void discard();
	int getid();
	Player* getPlayer();
	std::string getName();
	std::string getCardDesc();
	CardType getType();
	std::vector<int> getPosition();
	int getCost();
	std::vector<CardEffect*> getEffects();
	std::vector<PassiveEffect*> getPassives();
};