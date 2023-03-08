#ifndef ELEMENTS_DAMAGETYPE_HPP_
#define ELEMENTS_DAMAGETYPE_HPP_

#include "../Util/EnumException.hpp"

class DamageType {
    public:
        enum Type {
            Physical = 0,
            Piercing = 1,
            Fire = 2,
            Water = 3,
            Earth = 4,
            Wind = 5,
            EnumCount = 6   // NUMBER_OF_DAMAGE_TYPES
        };

        static bool isIntValid(unsigned int value) {
            if (value < EnumCount) {
                return true;
            } else {
                return false;
            }
        }

        static DamageType::Type convertIntToEnum(unsigned int value) {
            if (!isIntValid(value)) {
                throw ::Util::EnumException_BadIntToEnumConversion("DamageType type could not be converted");
            } else {
                return static_cast<DamageType::Type>(value);
            }
        }

        static const char* getTextualName(DamageType::Type damageType) {
            const char *text = "";
            switch (damageType) {
                case Physical:
                    text = "Physical";
                    break;
                case Piercing:
                    text = "Piercing";
                    break;
                case Fire:
                    text = "Fire";
                    break;
                case Water:
                    text = "Water";
                    break;
                case Earth:
                    text = "Earth";
                    break;
                case Wind:
                    text = "Wind";
                    break;
                default:
                    text = "Unknown";
                    break;
            }
            return text;
        }

    private:
        DamageType();
};

#endif // ELEMENTS_DAMAGETYPE_HPP_