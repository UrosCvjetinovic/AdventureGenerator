#ifndef RACE_HPP_
#define RACE_HPP_

#include "RaceType.hpp"

class RaceIf {
        RaceIf();
        ~RaceIf();
    public:
        virtual RaceType::Type getRaceType() = 0;
    private:
};

#endif // RACE_HPP_