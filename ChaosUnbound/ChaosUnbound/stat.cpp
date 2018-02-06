#include "stat.h"
#include <vector>

Buff::Buff(int v, int d) : value(v), duration(d) {};
int Buff::getDuration() {
	return duration;
}
int Buff::getValue() {
	return value;
}
int Buff::ageBuff() {
	return --duration;
}

Stat::Stat(int v, int c, int m) : value(v), cost(c), maxValue(m) {};
int Stat::calculateValue() {
	int temp = value;
	for (std::vector<Buff>::iterator it = buffs.begin(); it != buffs.end(); ++it) {
		temp += it->getValue();
	}
	return  temp;
}
int Stat::getCost() {
	return cost;
}
void Stat::addBuff(Buff b) {
	buffs.push_back(b);
}
void Stat::ageBuffs() {
	for (std::vector<Buff>::iterator it = buffs.begin(); it != buffs.end(); ++it)
		it->ageBuff();
}
int Stat::decreaseStat(int v) {
	return value -= v;
}