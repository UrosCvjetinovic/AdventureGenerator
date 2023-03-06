#ifndef DWARF_HPP_
#define DWARF_HPP_

#include "RaceIf.hpp"

class Dwarf : public RaceIf {
        Dwarf();
        ~Dwarf();
        RaceType::Type getRaceType() {return RaceType::Dwarf;};
    private:

};

#endif // DWARF_HPP_