#ifndef JEWERLY_HPP_
#define JEWERLY_HPP_

#include "../Util/SpecificTypes.hpp"
#include "../Elements/DamageType.hpp"
#include "AttributeType.hpp"
#include "../ItemIf.hpp"
#include "../ItemType.hpp"
#include "JewerlyType.hpp"

class JewerlyIf : public ItemIf {
    JewerlyIf(char* nameToSet);
    ~JewerlyIf();

    virtual JewerlyType::Type getJewerlyType() = 0;
    virtual ItemType::Type getItemType() {return ItemType::Jewelry;}
    unsigned int getRequiredAttributeLevel (AttributeType::Type attribute) { return requiredAttributesLevel[attribute];}
    unsigned int getInProcentResistanceToDamageType (DamageType::Type damageType) { return resistanceToDamageInProcent[damageType];}
    unsigned int getHP() {return healthPoints;}

private:
    unsigned int healthPoints;
    unsigned int evasion;
    unsigned int requiredAttributesLevel [NUMBER_OF_ATTRIBUTES];
    unsigned int resistanceToDamageInProcent [NUMBER_OF_DAMAGE_TYPES];
};

class Ring : public JewerlyIf {
    Ring(char* nameToSet);
    ~Ring();
    JewerlyType::Type getJewerlyType() { return JewerlyType::Ring; }
};

class Necklace : public JewerlyIf {
    Necklace(char* nameToSet);
    ~Necklace();
    JewerlyType::Type getJewerlyType() { return JewerlyType::Necklace; }
};

class Bracelet : public JewerlyIf {
    Bracelet(char* nameToSet);
    ~Bracelet();
    JewerlyType::Type getJewerlyType() { return JewerlyType::Bracelet; }
};

class Earrings : public JewerlyIf {
    Earrings(char* nameToSet);
    ~Earrings();
    JewerlyType::Type getJewerlyType() { return JewerlyType::Earrings; }
};

#endif // JEWERLY_HPP_