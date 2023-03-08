#ifndef ITEMS_ITEMTYPE_HPP_
#define ITEMS_ITEMTYPE_HPP_

#include "../Util/EnumException.hpp"

class ItemType {
    public:
        enum Type {
            Consumable = 0,
            Weapon = 1,
            Armor = 2,
            Jewelry = 3,
            //QuestRelated = 3,
            // Bag = 0,
            // Map = 1,
            // Junk = 7,
            // Key = 21,
            // Relic = 22,
            // Gem = 23,

            EnumCount = 4
        };

        static bool isIntValid(unsigned int value) {
            if (value < EnumCount) {
                return true;
            } else {
                return false;
            }
        }

        static ItemType::Type convertIntToEnum(unsigned int value) {
            if (!isIntValid(value)) {
                throw ::Util::EnumException_BadIntToEnumConversion("ItemType type could not be converted");
            } else {
                return static_cast<ItemType::Type>(value);
            }
        }

        static const char* getTextualName(ItemType::Type itemType) {
            const char *text = "";
            switch (itemType) {
                case Consumable:
                    text = "Consumable";
                    break;
                case Weapon:
                    text = "Weapon";
                    break;
                case Armor:
                    text = "Armor";
                    break;
                case Jewelry:
                    text = "Jewelry";
                    break;
                // case Bag:
                //     text = "Bag";
                //     break;
                // case QuestRelated:
                //     text = "QuestRelated";
                //     break;
                // case Map:
                //     text = "Map";
                //     break;
                default:
                    text = "Unknown";
                    break;
            }
            return text;
        }

    private:
        ItemType();
};

#endif // ITEMS_ITEMTYPE_HPP_