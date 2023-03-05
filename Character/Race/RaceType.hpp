#ifndef RACE_TYPE_HPP_
#define RACE_TYPE_HPP_

#include "../Util/EnumException.hpp"

class RaceType {
    public:
        enum Type {
            Human = 0,
            Undead = 1,
            Elf = 2,
            Dwarf = 3,
            Orc = 4,
            EnumCount = 5   // NUMBER_OF_ATTRIBUTES
        };

        static bool isIntValid(unsigned int value) {
            if (value < EnumCount) {
                return true;
            } else {
                return false;
            }
        }

        static RaceType::Type convertIntToEnum(unsigned int value) {
            if (!isIntValid(value)) {
                throw ::Util::EnumException_BadIntToEnumConversion("RaceType type could not be converted");
            } else {
                return static_cast<RaceType::Type>(value);
            }
        }

        static const char* getTextualName(RaceType::Type raceType) {
            const char *text = "";
            switch (raceType) {
                case Human:
                    text = "Human";
                    break;
                case Undead:
                    text = "Undead";
                    break;
                case Elf:
                    text = "Elf";
                    break;
                case Dwarf:
                    text = "Dwarf";
                    break;
                case Orc:
                    text = "Orc";
                    break;
                default:
                    text = "Unknown";
                    break;
            }
            return text;
        }

    private:
        RaceType();
};

#endif // RACE_TYPE_HPP_