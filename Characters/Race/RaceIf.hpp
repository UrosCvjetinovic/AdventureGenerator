#ifndef CHARACTERS_RACE_RACE_HPP_
#define CHARACTERS_RACE_RACE_HPP_

#include "RaceType.hpp"

class RaceIf {
        RaceIf();
        ~RaceIf();
    public:
        virtual RaceType::Type getRaceType() = 0;
    private:
};

#endif // CHARACTERS_RACE_RACE_HPP_