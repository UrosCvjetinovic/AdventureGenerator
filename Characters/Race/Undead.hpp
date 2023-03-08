#ifndef CHARACTERS_RACE_UNDEAD_HPP_
#define CHARACTERS_RACE_UNDEAD_HPP_

#include "RaceIf.hpp"

class Undead : public RaceIf  {
        Undead();
        ~Undead();
        RaceType::Type getRaceType() {return RaceType::Undead;};
    private:

};

#endif // CHARACTERS_RACE_UNDEAD_HPP_