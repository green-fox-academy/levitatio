#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

class Animal {
    int _hunger;
    int _thirst;

public:
    bool operator> (const Animal &);
    bool operator< (const Animal &);
    Animal ();
    void eat ();
    void drink ();
    void play();
};


#endif //ANIMAL_ANIMAL_H