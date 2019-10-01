#ifndef INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_ELECTRICGUITAR_H


#include "StringedInstrument.h"

class ElectricGuitar : public StringedInstrument{
public:
    ElectricGuitar ();
    ElectricGuitar(int numberOfStrings);

    void play () final;
    void sound () final;
};


#endif //INSTRUMENTS_ELECTRICGUITAR_H
