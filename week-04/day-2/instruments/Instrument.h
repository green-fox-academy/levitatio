#ifndef INSTRUMENTS_INSTRUMENT_H
#define INSTRUMENTS_INSTRUMENT_H

#include <iostream>
#include <string>

class Instrument {
public:
    Instrument ();

    virtual void play() = 0;
protected:
    std::string _name;

};


#endif //INSTRUMENTS_INSTRUMENT_H
