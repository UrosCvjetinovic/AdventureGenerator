#ifndef ELEMENTS_ELEMENTTYPE_HPP_
#define ELEMENTS_ELEMENTTYPE_HPP_

#include "../Util/EnumException.hpp"

class ElementType {
    enum Type {
        Fire = 0,
        Water = 1,
        Earth = 2,
        Wind = 3,
        EnumCount = 6   // NUMBER_OF_ATTRIBUTES
    };

    static bool isIntValid(unsigned int value) {
        if (value < EnumCount) {
            return true;
        } else {
            return false;
        }
    }

    static ElementType::Type convertIntToEnum(unsigned int value) {
        if (!isIntValid(value)) {
            throw ::Util::EnumException_BadIntToEnumConversion("ElementType type could not be converted");
        } else {
            return static_cast<ElementType::Type>(value);
        }
    }

    static const char* getTextualName(ElementType::Type elementType) {
        const char *text = "";
        switch (elementType) {
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
        ElementType();
};

#endif // ELEMENTS_ELEMENTTYPE_HPP_