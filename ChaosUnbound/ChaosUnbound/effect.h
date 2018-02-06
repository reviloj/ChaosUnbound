#pragma once

#include "aoeShape.h"
#include "enum.h"

class Card;

class CardEffect {
	Card* card;
	int cost;
public:
	CardEffect(int c, Card* card);
	int getCost();
	virtual void activate() =0;
};

class PassiveEffect {
	Card* card;
	StatType triggerStat;
	CardType triggerCardType;
public:
	PassiveEffect(StatType s, CardType c, Card* card);
	StatType getTriggerStat();
	CardType getTriggerCardType();
	virtual void activate() = 0;
};