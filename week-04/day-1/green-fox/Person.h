#ifndef GREEN_FOX_PERSON_H
#define GREEN_FOX_PERSON_H

#include <iostream>
#include <string>

enum class Gender {
    MALE, FEMALE
};

class Person {
public:
    Person();
    Person (std::string name, int age, Gender gender);

    virtual void introduce ();
    virtual void getGoal ();
    void printGender ();
protected:
    std::string _name;
    Gender _gender;
    int _age;
};


#endif //GREEN_FOX_PERSON_H
