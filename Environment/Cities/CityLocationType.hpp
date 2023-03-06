#ifndef CITY_LOCATION_TYPE_HPP_
#define CITY_LOCATION_TYPE_HPP_

#include "../Util/EnumException.hpp"

class CityLocationType {
    public:
        enum Type {
            EnumCount = 0
        };

        static bool isIntValid(unsigned int value) {
            if (value < EnumCount) {
                return true;
            } else {
                return false;
            }
        }

        static CityLocationType::Type convertIntToEnum(unsigned int value) {
            if (!isIntValid(value)) {
                throw ::Util::EnumException_BadIntToEnumConversion("CityLocationType type could not be converted");
            } else {
                return static_cast<CityLocationType::Type>(value);
            }
        }

        static const char* getTextualName(CityLocationType::Type cityLocationType) {
            const char *text = "";
            switch (cityLocationType) {
                default:
                    text = "Unknown";
                    break;
            }
            return text;
        }

    private:
        CityLocationType();
};

#endif // CITY_LOCATION_TYPE_HPP_