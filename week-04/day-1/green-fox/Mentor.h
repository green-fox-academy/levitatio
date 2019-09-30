#ifndef GREEN_FOX_MENTOR_H
#define GREEN_FOX_MENTOR_H

#include "Person.h"

enum class Level{
    JUNIOR, INTERMEDIATE, SENIOR
};

class Mentor : public Person {
public:
    Mentor ();
    Mentor (std::string name, int age, Gender gender, Level level);

    virtual void getGoal ();
    virtual void introduce ();
    void printLevel ();

private:
    Level _level;

};


#endif //GREEN_FOX_MENTOR_H
