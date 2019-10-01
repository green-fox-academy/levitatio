#ifndef INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_BASSGUITAR_H


#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument{
public:
    BassGuitar ();
    BassGuitar (int numberOfStrings);

    void play() final;
    void sound() final;
};


#endif //INSTRUMENTS_BASSGUITAR_H
