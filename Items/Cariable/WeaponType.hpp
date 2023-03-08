#ifndef ITEMS_CARIABLE_WEAPONTYPE_HPP_
#define ITEMS_CARIABLE_WEAPONTYPE_HPP_

#include "../Util/EnumException.hpp"

class WeaponType {
    public:
        enum Type {
            Dagger = 0,
            Sword = 1,
            LongSword = 2,
            Spear = 3,
            Axe = 4,
            Mace = 5,
            Hammer = 6,
            Bow = 7,
            Crossbow = 8,
            Wand = 9,
            SpellBook = 10,
            MagicOrb = 11,
            EnumCount
        };

        static bool isIntValid(unsigned int value) {
            if (value < EnumCount) {
                return true;
            } else {
                return false;
            }
        }

        static WeaponType::Type convertIntToEnum(unsigned int value) {
            if (!isIntValid(value)) {
                throw ::Util::EnumException_BadIntToEnumConversion("WeaponType type could not be converted");
            } else {
                return static_cast<WeaponType::Type>(value);
            }
        }

        static const char* getTextualName(WeaponType::Type weaponType) {
            const char *text = "";
            switch (weaponType) {
                case Dagger:
                    text = "Dagger";
                    break;
                case Sword:
                    text = "Sword";
                    break;
                case LongSword:
                    text = "LongSword";
                    break;
                case Spear:
                    text = "Spear";
                    break;
                case Axe:
                    text = "Axe";
                    break;
                case Mace:
                    text = "Mace";
                    break;
                case Hammer:
                    text = "Hammer";
                    break;
                case Bow:
                    text = "Bow";
                    break;
                case Crossbow:
                    text = "Crossbow";
                    break;
                case Wand:
                    text = "Wand";
                    break;
                case SpellBook:
                    text = "SpellBook";
                    break;
                case MagicOrb:
                    text = "MagicOrb";
                    break;
                default:
                    text = "Unknown";
                    break;
            }
            return text;
        }

    private:
        WeaponType();
};

#endif // ITEMS_CARIABLE_WEAPONTYPE_HPP_