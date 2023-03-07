#ifndef QUESTITEM_TYPE_HPP_
#define QUESTITEM_TYPE_HPP_

#include "../Util/EnumException.hpp"

class QuestItemType {
    public:
        enum Type {
            Key = 0,
            Relic = 1,
            Gem = 2,
            EnumCount = 3
        };

        static bool isIntValid(unsigned int value) {
            if (value < EnumCount) {
                return true;
            } else {
                return false;
            }
        }

        static QuestItemType::Type convertIntToEnum(unsigned int value) {
            if (!isIntValid(value)) {
                throw ::Util::EnumException_BadIntToEnumConversion("QuestItemType type could not be converted");
            } else {
                return static_cast<QuestItemType::Type>(value);
            }
        }

        static const char* getTextualName(QuestItemType::Type questItemType) {
            const char *text = "";
            switch (questItemType) {
                case Key:
                    text = "Key";
                    break;
                case Relic:
                    text = "Relic";
                    break;
                case Gem:
                    text = "Gem";
                    break;
                default:
                    text = "Unknown";
                    break;
            }
            return text;
        }

    private:
        QuestItemType();
};

#endif // QUESTITEM_TYPE_HPP_