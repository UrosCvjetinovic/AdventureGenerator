#ifndef ITEMS_CARIABLE_CONSUMABLETYPE_HPP_
#define ITEMS_CARIABLE_CONSUMABLETYPE_HPP_

#include "../Util/EnumException.hpp"

class ConsumableType {
    public:
        enum Type {
            HealthPotion = 0,
            PoisonPotion = 1,
            Bomb = 2,
            EnumCount = 3
        };

        static bool isIntValid(unsigned int value) {
            if (value < EnumCount) {
                return true;
            } else {
                return false;
            }
        }

        static ConsumableType::Type convertIntToEnum(unsigned int value) {
            if (!isIntValid(value)) {
                throw ::Util::EnumException_BadIntToEnumConversion("ConsumableType type could not be converted");
            } else {
                return static_cast<ConsumableType::Type>(value);
            }
        }

        static const char* getTextualName(ConsumableType::Type consumableType) {
            const char *text = "";
            switch (consumableType) {
                case HealthPotion:
                    text = "HealthPotion";
                    break;
                case PoisonPotion:
                    text = "PoisonPotion";
                    break;
                case Bomb:
                    text = "Bomb";
                    break;
                default:
                    text = "Unknown";
                    break;
            }
            return text;
        }

    private:
        ConsumableType();
};

#endif // ITEMS_CARIABLE_CONSUMABLETYPE_HPP_