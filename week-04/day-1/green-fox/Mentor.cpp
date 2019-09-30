#include "Mentor.h"

Mentor::Mentor() : Person(), _level(Level::INTERMEDIATE){}

Mentor::Mentor(std::string name, int age, Gender gender, Level level)
                : Person(name, age, gender), _level(level){}

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers.\n";
}

void Mentor::introduce() {
    std::cout << "hi, I'm " << _name << ", a " << _age << " year old ";
    printGender();
    std::cout << " " ;
    printLevel();
    std::cout << " mentor.\n";
}

void Mentor::printLevel() {
    switch (_level) {
        case Level::JUNIOR: std::cout << "junior"; break;
        case Level::INTERMEDIATE: std::cout << "intermediate"; break;
        case Level::SENIOR : std::cout << "senior"; break;
        default : std::cout << "Epic fail";
    }

}
