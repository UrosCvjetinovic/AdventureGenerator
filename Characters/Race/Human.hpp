#ifndef CHARACTERS_RACE_HUMAN_HPP_
#define CHARACTERS_RACE_HUMAN_HPP_

#include "RaceIf.hpp"

class Human : public RaceIf  {
        Human();
        ~Human();
        RaceType::Type getRaceType() {return RaceType::Human;};
    private:

};

#endif // CHARACTERS_RACE_HUMAN_HPP_