#include "card.h"

Card::Card(int id, std::string n, std::string d, CardType t, int pos, int c, std::vector<CardEffect> e, std::vector<PassiveEffect> p)
	: id(id), name(n), cardDescription(d), type(t), position{ pos, pos }, cost(c), effects(e), passives(p) {};

int Card::getid() {
	return id;
}
Player* Card::getPlayer() {
	return player;
}
std::string Card::getName() {
	return name;
}
std::string Card::getCardDesc() {
	return cardDescription;
}
CardType Card::getType() {
	return type;
}
std::vector<int> Card::getPosition() {
	return position;
}
int Card::getCost() {
	return cost;
}
std::vector<CardEffect> Card::getEffects() {
	return effects;
}
std::vector<PassiveEffect> Card::getPassives() {
	return passives;
}