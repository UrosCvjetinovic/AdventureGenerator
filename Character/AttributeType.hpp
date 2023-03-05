#ifndef ATTRIBUTE_TYPE_HPP_
#define ATTRIBUTE_TYPE_HPP_

#include "../Util/EnumException.hpp"

class AttributeType {
    public:
        enum Type {
            Strength = 0,
            Dexterity = 1,
            Constitution = 2,
            Intelligence = 3,
            Wisdom = 4,
            Charisma = 5,
            EnumCount = 6   // NUMBER_OF_ATTRIBUTES
        };

        static bool isIntValid(unsigned int value) {
            if (value < EnumCount) {
                return true;
            } else {
                return false;
            }
        }

        static AttributeType::Type convertIntToEnum(unsigned int value) {
            if (!isIntValid(value)) {
                throw ::Util::EnumException_BadIntToEnumConversion("AttributeType type could not be converted");
            } else {
                return static_cast<AttributeType::Type>(value);
            }
        }

        static const char* getTextualName(AttributeType::Type attributeType) {
            const char *text = "";
            switch (attributeType) {
                case Strength:
                    text = "Strength";
                    break;
                case Dexterity:
                    text = "Dexterity";
                    break;
                case Constitution:
                    text = "Constitution";
                    break;
                case Intelligence:
                    text = "Intelligence";
                    break;
                case Wisdom:
                    text = "Wisdom";
                    break;
                case Charisma:
                    text = "Charisma";
                    break;
                default:
                    text = "Unknown";
                    break;
            }
            return text;
        }

    private:
        AttributeType();
};

#endif // ATTRIBUTE_TYPE_HPP_