#include <iostream>

int main() {
    int codingHoursPerDaily = 6;
    int durationOfSemester = 17;

    std::cout << codingHoursPerDaily * durationOfSemester << " hours is spent with coding in a semester by an attendee \n" ;

    std::cout << ((codingHoursPerDaily * 5) / 52.) *100 << " percentage of coding hours of working hours";

    return 0;
}