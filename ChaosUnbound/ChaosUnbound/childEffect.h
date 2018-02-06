#pragma once

#include "enum.h"
#include "effect.h"
//#include "card.h"

class Card;

class Detect : public CardEffect {
	AoeShape* shape;
	int range;
public:
	Detect(int c, Card* card, AoeShape* s);
	virtual void activate();
};

class Damage : public CardEffect {
	AoeShape* shape;
	int amount;
	int range;
public:
	Damage(int c, Card* card, int a, int r, AoeShape* s);
	virtual void activate();
};

class Buff : public CardEffect {
	AoeShape* shape;
	int range;
	int amount;
	int duration;
	StatType stat;
public:
	Buff(int c, Card* card, int r, int a, int d, StatType t, AoeShape* s);
	virtual void activate();
};

class CostBuff : public Buff {
public:
	CostBuff(int c, Card* card, int r, int a, int d, StatType t, AoeShape* s);
	virtual void activate();
};

class Heal : public CardEffect {
	AoeShape* shape;
	int range;
	int amount;
public:
	Heal(int c, Card* card, int r, int a, AoeShape* s);
	virtual void activate();
};

class UnitHold : public CardEffect {
	AoeShape* shape;
	Card* heldCard;
public:
	UnitHold(int c, Card* card, Card* heldCard, AoeShape* s);
	virtual void activate();
};

class PushBack : public CardEffect {
	AoeShape* shape;
	int range;
	int amount;
public:
	PushBack(int c, Card* card, int r, int a, AoeShape* s);
	virtual void activate();
};

class DamageTaken : public PassiveEffect {
	float multiplier;
public:
	DamageTaken(StatType s, CardType c, Card* card, float);
	virtual void activate();
};

class AttackMove : public PassiveEffect {
	AttackMove(StatType s, CardType c, Card* card);
	virtual void activate();
};

class IndirectAttack : public PassiveEffect {
	IndirectAttack(StatType s, CardType c, Card* card);
	virtual void activate();
};

class AoeAttack : public PassiveEffect {
	AoeAttack(StatType s, CardType c, Card* card);
	virtual void activate();
};