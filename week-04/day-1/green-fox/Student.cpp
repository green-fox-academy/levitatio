#include "Student.h"

Student::Student() : Person(), _previousOrganization("The School of Life"), _skippedDays(0){}

Student::Student(std::string name, int age, Gender gender, std::string previousOrganization)
    : Person(name, age, gender), _previousOrganization(previousOrganization), _skippedDays(0) {}

void Student::getGoal() {
    std::cout << "My goal is: Be a junior software developer.\n";
}

void Student::introduce() {
    std::cout << "Hi, I'am " << _name << " a " << _age << " year old ";
    printGender();
    std::cout <<  " from " << _previousOrganization << " who skipped " << _skippedDays
              <<  " days from the course already.\n";
}

void Student::skipDays(int numberOfDays) {
    _skippedDays += numberOfDays;
}
