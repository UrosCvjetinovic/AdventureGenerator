#ifndef ITEMS_WEARABLE_JEWERLYTYPE_HPP_
#define ITEMS_WEARABLE_JEWERLYTYPE_HPP_

#include "../Util/EnumException.hpp"

class JewerlyType {
    public:
        enum Type {
            Ring = 0,
            Necklace = 1,
            Bracelet = 2,
            Earrings = 3,
            EnumCount = 4
        };

        static bool isIntValid(unsigned int value) {
            if (value < EnumCount) {
                return true;
            } else {
                return false;
            }
        }

        static JewerlyType::Type convertIntToEnum(unsigned int value) {
            if (!isIntValid(value)) {
                throw ::Util::EnumException_BadIntToEnumConversion("JewerlyType type could not be converted");
            } else {
                return static_cast<JewerlyType::Type>(value);
            }
        }

        static const char* getTextualName(JewerlyType::Type jewerlyType) {
            const char *text = "";
            switch (jewerlyType) {
                case Ring:
                    text = "Ring";
                    break;
                case Necklace:
                    text = "Necklace";
                    break;
                case Bracelet:
                    text = "Bracelet";
                    break;
                case Earrings:
                    text = "Earrings";
                    break;
                default:
                    text = "Unknown";
                    break;
            }
            return text;
        }

    private:
        JewerlyType();
};

#endif // ITEMS_WEARABLE_JEWERLYTYPE_HPP_