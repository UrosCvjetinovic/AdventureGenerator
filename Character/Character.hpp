#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include "../Util/SpecificTypes.hpp"
#include "../Elements/DamageType.hpp"
#include "AttributeType.hpp"
#include "Race/Race.hpp"

class Character {
    Character();
    ~Character();

    unsigned int getAttributeLevel (AttributeType::Type attribute) { return attributesLevel[attribute];}
    unsigned int getInProcentResistanceToDamageType (DamageType::Type damageType) { return resistanceToElementsInProcent[damageType];}
    unsigned int getHP() {return healthPoints;}
    char* getName() {return name;}
    
    bool isWounded() { return healthPoints < maxHealthPoints;}
    bool isAlive() { return healthPoints > 0;}

    virtual void takeDamage(DamageType::Type DamageType, unsigned int value);
    virtual void heal(unsigned int value);
private:
    char name[SHORT_NAME_SIZE];
    unsigned int attributesLevel [NUMBER_OF_ATTRIBUTES];
    unsigned int maxHealthPoints;
    int healthPoints;
    unsigned int resistanceToElementsInProcent [NUMBER_OF_DAMAGE_TYPES];
    // items

};



#endif // CHARACTER_HPP_