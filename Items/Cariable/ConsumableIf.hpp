#ifndef ITEMS_CARIABLE_CONSUMABLE_HPP_
#define ITEMS_CARIABLE_CONSUMABLE_HPP_

#include "../Util/SpecificTypes.hpp"
#include "../Elements/DamageType.hpp"
#include "AttributeType.hpp"
#include "../ItemIf.hpp"
#include "../ItemType.hpp"
#include "ConsumableType.hpp"

class ConsumableIf : public ItemIf {
    ConsumableIf(char* nameToSet);
    ~ConsumableIf();

    virtual ConsumableType::Type getConsumableType() = 0;
    virtual ItemType::Type getItemType() {return ItemType::Consumable;}
    unsigned int getRequiredAttributeLevel (AttributeType::Type attribute) { return requiredAttributesLevel[attribute];}
    unsigned int getInProcentResistanceToDamageType (DamageType::Type damageType) { return resistanceToDamageInProcent[damageType];}
    unsigned int getHPIncrease() {return healthPointsIncrease;}
    char* getName() {return name;}

private:
    char name[SHORT_NAME_SIZE];
    unsigned int healthPointsIncrease;
    unsigned int evasion;
    unsigned int requiredAttributesLevel [NUMBER_OF_ATTRIBUTES];
    unsigned int resistanceToDamageInProcent [NUMBER_OF_DAMAGE_TYPES];
};

class HealthPotion : public ConsumableIf {
    HealthPotion(char* nameToSet);
    ~HealthPotion();
    ConsumableType::Type getConsumableType() { return ConsumableType::HealthPotion; }
};

class PoisonPotion : public ConsumableIf {
    PoisonPotion(char* nameToSet);
    ~PoisonPotion();
    ConsumableType::Type getConsumableType() { return ConsumableType::PoisonPotion; }
};

class Bomb : public ConsumableIf {
    Bomb(char* nameToSet);
    ~Bomb();
    ConsumableType::Type getConsumableType() { return ConsumableType::Bomb; }
};

#endif // ITEMS_CARIABLE_CONSUMABLE_HPP_