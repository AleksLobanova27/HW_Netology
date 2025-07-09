#ifndef CLASS_H
#define CLASS_H

class Counter {
private:
    int _value;

public:
    Counter(int value); // Конструктор с начальным значением

    void increment();

    void decrement();

    int getValue() ;
};


#endif
