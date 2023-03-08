#ifndef ITEMS_CARIABLE_WEAPON_HPP_
#define ITEMS_CARIABLE_WEAPON_HPP_

#include "../Util/SpecificTypes.hpp"
#include "../Elements/DamageType.hpp"
#include "AttributeType.hpp"
#include "../ItemIf.hpp"
#include "../ItemType.hpp"
#include "WeaponType.hpp"

class WeaponIf : public ItemIf {
    WeaponIf(char* nameToSet);
    ~WeaponIf();

    virtual WeaponType::Type getWeaponType() = 0;
    virtual ItemType::Type getItemType() {return ItemType::Weapon;}
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

class Dagger : public WeaponIf {
    Dagger(char* nameToSet);
    ~Dagger();
    WeaponType::Type getWeaponType() { return WeaponType::Type::Dagger; }
};

class Sword : public WeaponIf {
    Sword(char* nameToSet);
    ~Sword();
    WeaponType::Type getWeaponType() { return WeaponType::Type::Sword; }
};

class LongSword : public WeaponIf {
    LongSword(char* nameToSet);
    ~LongSword();
    WeaponType::Type getWeaponType() { return WeaponType::Type::DaLongSwordgger; }
};

class Spear : public WeaponIf {
    Spear(char* nameToSet);
    ~Spear();
    WeaponType::Type getWeaponType() { return WeaponType::Type::Spear; }
};

class Axe : public WeaponIf {
    Axe(char* nameToSet);
    ~Axe();
    WeaponType::Type getWeaponType() { return WeaponType::Type::Axe; }
};

class Mace : public WeaponIf {
    Mace(char* nameToSet);
    ~Mace();
    WeaponType::Type getWeaponType() { return WeaponType::Type::Mace; }
};

class Hammer : public WeaponIf {
    Hammer(char* nameToSet);
    ~Hammer();
    WeaponType::Type getWeaponType() { return WeaponType::Type::Hammer; }
};

class Bow : public WeaponIf {
    Bow(char* nameToSet);
    ~Bow();
    WeaponType::Type getWeaponType() { return WeaponType::Type::Bow; }
};

class Crossbow : public WeaponIf {
    Crossbow(char* nameToSet);
    ~Crossbow();
    WeaponType::Type getWeaponType() { return WeaponType::Type::Crossbow; }
};

class Wand : public WeaponIf {
    Wand(char* nameToSet);
    ~Wand();
    WeaponType::Type getWeaponType() { return WeaponType::Type::Wand; }
};

class SpellBook : public WeaponIf {
    SpellBook(char* nameToSet);
    ~SpellBook();
    WeaponType::Type getWeaponType() { return WeaponType::Type::SpellBook; }
};

class MagicOrb : public WeaponIf {
    MagicOrb(char* nameToSet);
    ~MagicOrb();
    WeaponType::Type getWeaponType() { return WeaponType::Type::MagicOrb; }
};

#endif // ITEMS_CARIABLE_WEAPON_HPP_