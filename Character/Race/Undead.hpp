#ifndef UNDEAD_HPP_
#define UNDEAD_HPP_

#include "RaceIf.hpp"

class Undead : public RaceIf  {
        Undead();
        ~Undead();
        RaceType::Type getRaceType() {return RaceType::Undead;};
    private:

};

#endif // UNDEAD_HPP_