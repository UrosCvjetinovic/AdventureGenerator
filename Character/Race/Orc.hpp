#ifndef ORC_HPP_
#define ORC_HPP_

#include "RaceIf.hpp"

class Orc : public RaceIf {
        Orc();
        ~Orc();
        RaceType::Type getRaceType() {return RaceType::Orc;};
    private:

};

#endif // ORC_HPP_