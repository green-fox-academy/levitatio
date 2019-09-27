#ifndef PIRATES_PIRATE_H
#define PIRATES_PIRATE_H


class Pirate {
public:
    Pirate();

    void drinkSomeRum();
    void howsItGoingMate();
    void die();
    void passedOut();
    void brawl(Pirate&);
    int getState ();
    int getConsumedRum();

    bool isAlive ();
    bool isDead ();
    bool isPassedOut ();

private:
    int _consumedRum;
    int _state;      // '0' is normal '1' passed out  '2' died

};


#endif //PIRATES_PIRATE_H
