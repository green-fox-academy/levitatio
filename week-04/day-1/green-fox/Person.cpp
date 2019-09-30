
#include "Person.h"

Person::Person() : _name("Jane Doe"), _age(30), _gender(Gender::FEMALE) {}

Person::Person(std::string name, int age, Gender gender) : _name(name), _age(age), _gender(gender){}

void Person::introduce() {
    std::cout << "Hi, I'am " << _name << " a " << _age << " year old ";
    printGender();
    std::cout << "." << std::endl;
}

void Person::getGoal() {
    std::cout << "My goal is: Live for the moment!\n";
}

void Person::printGender() {
    switch (_gender) {
        case Gender::MALE : std::cout << "male"; break;
        case Gender::FEMALE : std::cout << "female"; break;
        default: std::cout << "Epic fail in gender variable! ";
    }

}
