#ifndef QUESTITEM_HPP_
#define QUESTITEM_HPP_

#include "../Util/SpecificTypes.hpp"
#include "../ItemIf.hpp"
#include "../ItemType.hpp"
#include "QuestItemType.hpp"

class QuestItemIf : public ItemIf {
    QuestItemIf(char* nameToSet);
    ~QuestItemIf();

    virtual QuestItemType::Type getQuestItemType() = 0;
    virtual ItemType::Type getItemType() {return ItemType::QuestItem;}
    char* getName() {return name;}

private:
    char name[SHORT_NAME_SIZE];
};

class Key : public QuestItemIf {
    Key(char* nameToSet);
    ~Key();
    QuestItemType::Type getQuestItemType() { return QuestItemType::Key; }
};

class Relic : public QuestItemIf {
    Relic(char* nameToSet);
    ~Relic();
    QuestItemType::Type getQuestItemType() { return QuestItemType::Relic; }
};

class Gem : public QuestItemIf {
    Gem(char* nameToSet);
    ~Gem();
    QuestItemType::Type getQuestItemType() { return QuestItemType::Gem; }
};

#endif // QUESTITEM_HPP_