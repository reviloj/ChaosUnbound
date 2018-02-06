#include "childEffect.h"
//#include "card.h"

Detect::Detect(int c, Card* card, AoeShape* s) : CardEffect(c, card), shape(s) {};
void Detect::activate() {
	
}

Damage::Damage(int c, Card* card, int a, int r, AoeShape* s) : CardEffect(c, card), shape(s), amount(a), range(r) {};
void Damage::activate() {

}

Buff::Buff(int c, Card* card, int r, int a, int d, StatType t, AoeShape* s) : CardEffect(c, card), range(r), amount(a), duration(d), stat(t), shape(s) {};
void Buff::activate() {

}

CostBuff::CostBuff(int c, Card* card, int r, int a, int d, StatType t, AoeShape* s) : Buff(c, card, r, a, d, t, s) {};
void CostBuff::activate() {

}

Heal::Heal(int c, Card* card, int r, int a, AoeShape* s) : CardEffect(c, card), range(r), amount(a), shape(s) {};
void Heal::activate() {

}

UnitHold::UnitHold(int c, Card* card, Card* heldCard, AoeShape* s) : CardEffect(c, card), heldCard(heldCard), shape(s) {};
void UnitHold::activate() {

}

PushBack::PushBack(int c, Card* card, int r, int a, AoeShape* s) : CardEffect(c, card), range(r), amount(a), shape(s) {};
void PushBack::activate() {

}

DamageTaken::DamageTaken(StatType s, CardType c, Card* card, float m) : PassiveEffect(s, c, card), multiplier(m) {};
void DamageTaken::activate() {

}

AttackMove::AttackMove(StatType s, CardType c, Card* card) : PassiveEffect(s, c, card) {};
void AttackMove::activate() {

}

IndirectAttack::IndirectAttack(StatType s, CardType c, Card* card) : PassiveEffect(s, c, card) {};
void IndirectAttack::activate() {

}

AoeAttack::AoeAttack(StatType s, CardType c, Card* card) : PassiveEffect(s, c, card) {};
void AoeAttack::activate() {

}