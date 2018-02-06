#include "effect.h"
//#include "card.h"

CardEffect::CardEffect(int c, Card* card) : cost(c), card(card) {};
int CardEffect::getCost() {
	return cost;
}
void CardEffect::activate() {

}

PassiveEffect::PassiveEffect(StatType s, CardType c, Card* card) : triggerStat(s), triggerCardType(c), card(card) {};
StatType PassiveEffect::getTriggerStat() {
	return triggerStat;
}
CardType PassiveEffect::getTriggerCardType() {
	return triggerCardType;
}
void PassiveEffect::activate() {

}
