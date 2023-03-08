#ifndef ITEMS_WEARABLE_ARMORTYPE_HPP_
#define ITEMS_WEARABLE_ARMORTYPE_HPP_

#include "../Util/EnumException.hpp"

class ArmorType {
    public:
        enum Type {
            Helmet = 0,
            Shoulder = 1,
            Cape = 2,
            ChestArmor = 4,
            Wrist = 5,
            Glove = 6,
            Belt = 7,
            Pants = 8,
            Boots = 9,
            EnumCount = 10
        };

        static bool isIntValid(unsigned int value) {
            if (value < EnumCount) {
                return true;
            } else {
                return false;
            }
        }

        static ArmorType::Type convertIntToEnum(unsigned int value) {
            if (!isIntValid(value)) {
                throw ::Util::EnumException_BadIntToEnumConversion("ArmorType type could not be converted");
            } else {
                return static_cast<ArmorType::Type>(value);
            }
        }

        static const char* getTextualName(ArmorType::Type armorType) {
            const char *text = "";
            switch (armorType) {
                case Helmet:
                    text = "Helmet";
                    break;
                case Shoulder:
                    text = "Shoulder";
                    break;
                case Cape:
                    text = "Cape";
                    break;
                case ChestArmor:
                    text = "ChestArmor";
                    break;
                case Wrist:
                    text = "Wrist";
                    break;
                case Glove:
                    text = "Glove";
                    break;
                case Belt:
                    text = "Belt";
                    break;
                case Pants:
                    text = "Pants";
                    break;
                case Boots:
                    text = "Boots";
                    break;
                default:
                    text = "Unknown";
                    break;
            }
            return text;
        }

    private:
        ArmorType();
};

#endif // ITEMS_WEARABLE_ARMORTYPE_HPP_