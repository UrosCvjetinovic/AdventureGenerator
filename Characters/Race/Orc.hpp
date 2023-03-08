#ifndef CHARACTERS_RACE_ORC_HPP_
#define CHARACTERS_RACE_ORC_HPP_

#include "RaceIf.hpp"

class Orc : public RaceIf {
        Orc();
        ~Orc();
        RaceType::Type getRaceType() {return RaceType::Orc;};
    private:

};

#endif // CHARACTERS_RACE_ORC_HPP_