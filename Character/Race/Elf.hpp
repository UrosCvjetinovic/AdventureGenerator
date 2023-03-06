#ifndef ELF_HPP_
#define ELF_HPP_

#include "RaceIf.hpp"

class Elf : public RaceIf  {
        Elf();
        ~Elf();
        RaceType::Type getRaceType() {return RaceType::Elf;};
    private:

};

#endif // ELF_HPP_