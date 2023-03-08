#ifndef ITEMS_WEARABLE_ARMOR_HPP_
#define ITEMS_WEARABLE_ARMOR_HPP_

#include "../Util/SpecificTypes.hpp"
#include "../Elements/DamageType.hpp"
#include "AttributeType.hpp"
#include "../ItemIf.hpp"
#include "../ItemType.hpp"
#include "ArmorType.hpp"

class ArmorIf : public ItemIf {
    ArmorIf(char* nameToSet);
    ~ArmorIf();

    virtual ArmorType::Type getArmorType() = 0;
    virtual ItemType::Type getItemType() {return ItemType::Armor;}
    unsigned int getRequiredAttributeLevel (AttributeType::Type attribute) { return requiredAttributesLevel[attribute];}
    unsigned int getInProcentResistanceToDamageType (DamageType::Type damageType) { return resistanceToDamageInProcent[damageType];}
    unsigned int getHPIncrease() {return healthPointsIncrease;}

private:
    unsigned int healthPointsIncrease;
    unsigned int evasion;
    unsigned int requiredAttributesLevel [NUMBER_OF_ATTRIBUTES];
    unsigned int resistanceToDamageInProcent [NUMBER_OF_DAMAGE_TYPES];
};


class Helmet : public ArmorIf {
    Helmet(char* nameToSet);
    ~Helmet();
    ArmorType::Type getArmorType() { return ArmorType::Type::Helmet; }
};

class Shoulder : public ArmorIf {
    Shoulder(char* nameToSet);
    ~Shoulder();
    ArmorType::Type getArmorType() { return ArmorType::Type::Shoulder; }
};

class Cape : public ArmorIf {
    Cape(char* nameToSet);
    ~Cape();
    ArmorType::Type getArmorType() { return ArmorType::Type::Cape; }
};

class ChestArmor : public ArmorIf {
    ChestArmor(char* nameToSet);
    ~ChestArmor();
    ArmorType::Type getArmorType() { return ArmorType::Type::ChestArmor; }
};

class Wrist : public ArmorIf {
    Wrist(char* nameToSet);
    ~Wrist();
    ArmorType::Type getArmorType() { return ArmorType::Type::Wrist; }
};

class Glove : public ArmorIf {
    Glove(char* nameToSet);
    ~Glove();
    ArmorType::Type getArmorType() { return ArmorType::Type::Glove; }
};

class Belt : public ArmorIf {
    Belt(char* nameToSet);
    ~Belt();
    ArmorType::Type getArmorType() { return ArmorType::Type::Belt; }
};

class Pants : public ArmorIf {
    Pants(char* nameToSet);
    ~Pants();
    ArmorType::Type getArmorType() { return ArmorType::Type::Pants; }
};

class Boots : public ArmorIf {
    Boots(char* nameToSet);
    ~Boots();
    ArmorType::Type getArmorType() { return ArmorType::Type::Boots; }
};

#endif // ITEMS_WEARABLE_ARMOR_HPP_