#ifndef GREEN_FOX_SPONSOR_H
#define GREEN_FOX_SPONSOR_H


#include "Person.h"

class Sponsor: public Person {
public:
    Sponsor ();
    Sponsor (std::string name, int age, Gender gender, std::string company);

    virtual void introduce ();
    virtual void getGoal ();
    void hire ();
private:
    std::string _company;
    int _hiredStudents;

};


#endif //GREEN_FOX_SPONSOR_H
