#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H


#include "Instrument.h"

class StringedInstrument : public Instrument {
public:
    StringedInstrument ();

    virtual void sound () = 0;
protected:
    int _numberOfStrings;

};


#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H
