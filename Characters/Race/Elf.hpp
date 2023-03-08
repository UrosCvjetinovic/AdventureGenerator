#ifndef CHARACTERS_RACE_ELF_HPP_
#define CHARACTERS_RACE_ELF_HPP_

#include "RaceIf.hpp"

class Elf : public RaceIf  {
        Elf();
        ~Elf();
        RaceType::Type getRaceType() {return RaceType::Elf;};
    private:

};

#endif // CHARACTERS_RACE_ELF_HPP_