#ifndef HUMAN_HPP_
#define HUMAN_HPP_

#include "RaceIf.hpp"

class Human : public RaceIf  {
        Human();
        ~Human();
        RaceType::Type getRaceType() {return RaceType::Human;};
    private:

};

#endif // HUMAN_HPP_