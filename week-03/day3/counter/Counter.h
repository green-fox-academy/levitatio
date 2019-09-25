#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

class Counter {
    int _number;
    int _numberInitialValue;
public:
    Counter ();
    Counter (int number);

    void add();
    void add(int number);
    int get();
    void reset();
};


#endif //COUNTER_COUNTER_H
