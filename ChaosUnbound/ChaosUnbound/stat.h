#pragma once

#include <vector>

class Buff {
	int value;
	int duration;
public:
	Buff(int v, int d);
	int getValue();
	int getDuration();
	int ageBuff();
};

class Stat {
	int value;
	int cost;
	int maxValue;
	std::vector<Buff> buffs;
public:
	Stat(int v, int c, int m);
	int calculateValue();
	int getCost();
	void addBuff(Buff b);
	void ageBuffs();
	int decreaseStat(int v);
};