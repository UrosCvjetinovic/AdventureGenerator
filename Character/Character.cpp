#include "Character.hpp"

void Character::takeDamage(DamageType::Type DamageType, unsigned int value) {
    unsigned int damageNotResisted = value * (resistanceToElementsInProcent[DamageType] / 100.0);
    if (damageNotResisted < healthPoints) {
        healthPoints -= damageNotResisted;
    } else {
        healthPoints = 0;
    }
}

void Character::heal(unsigned int value) {
    healthPoints += value;
    if (healthPoints > maxHealthPoints) {
        healthPoints = maxHealthPoints;
    }
}