#ifndef ITEM_HPP_
#define ITEM_HPP_

#include "../Util/SpecificTypes.hpp"
#include "../Elements/DamageType.hpp"
#include "AttributeType.hpp"
#include "ItemType.hpp"

class ItemIf {
    ItemIf(char* nameToSet);
    ~ItemIf();

    char* getName() {return name;}
    unsigned int getItemPrice() {return itemPrice;}
    virtual ItemType::Type getItemType() = 0;

private:
    char name[SHORT_NAME_SIZE];
    unsigned int itemPrice;
};



#endif // ITEM_HPP_