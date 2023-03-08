#ifndef CHARACTERS_RACE_DWARF_HPP_
#define CHARACTERS_RACE_DWARF_HPP_

#include "RaceIf.hpp"

class Dwarf : public RaceIf {
        Dwarf();
        ~Dwarf();
        RaceType::Type getRaceType() {return RaceType::Dwarf;};
    private:

};

#endif // CHARACTERS_RACE_DWARF_HPP_