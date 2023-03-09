#ifndef CHARACTERS_CHARACTER_HPP_
#define CHARACTERS_CHARACTER_HPP_

#include "../Util/SpecificTypes.hpp"
#include "../Elements/DamageType.hpp"
#include "AttributeType.hpp"
#include "Race/Race.hpp"

class CharacterIf {
    CharacterIf(char* nameToSet, unsigned int maxHealthPointsToSet, unsigned int);
    ~CharacterIf();

    void setAttributeLevel (AttributeType::Type attribute, unsigned int valueToSet) { attributesLevel[attribute] = valueToSet;}
    unsigned int getAttributeLevel (AttributeType::Type attribute) { return attributesLevel[attribute];}
    void setInProcentResistanceToDamageType (DamageType::Type damageType, unsigned int valueToSet) { resistanceToDamageInProcent[damageType] = valueToSet;}
    unsigned int getInProcentResistanceToDamageType (DamageType::Type damageType) { return resistanceToDamageInProcent[damageType];}
    void setHP (unsigned int valueToSet) {healthPoints = valueToSet;}
    unsigned int getHP() {return healthPoints;}
    void setMaxHP (unsigned int valueToSet) {maxHealthPoints = valueToSet;}
    unsigned int getMaxHP() {return maxHealthPoints;}
    char* getName() {return name;}
    
    bool isWounded() { return healthPoints < maxHealthPoints;}
    bool isAlive() { return healthPoints > 0;}

    virtual void takeDamage(DamageType::Type DamageType, unsigned int value);
    virtual void heal(unsigned int value);
private:
    char name[SHORT_NAME_SIZE];
    unsigned int attributesLevel [NUMBER_OF_ATTRIBUTES];
    unsigned int maxHealthPoints;
    unsigned int healthPoints;
    unsigned int resistanceToDamageInProcent [NUMBER_OF_DAMAGE_TYPES];
    // items

};



#endif // CHARACTERS_CHARACTER_HPP_