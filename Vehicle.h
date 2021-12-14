//
// Created by hloi on 12/14/2021.
//

#ifndef CSC109CH10INHERIT_VEHICLE_H
#define CSC109CH10INHERIT_VEHICLE_H


#include <iostream>
#include <stdexcept>

using namespace std;

template<typename T1>
class Vehicle {
public:
    Vehicle() {}

    Vehicle(T1* speedToSet) {

        speed = *speedToSet;
    }

    void SetSpeed(T1* speedToSet) {
        if (*speedToSet < 0) {
            throw out_of_range("Invalid height.");
        }
        speed = *speedToSet;
    }

    virtual void PrintSpeed() {
        cout << speed << endl;
    }
//    virtual void PrintSpeed() = 0;

//    virtual void addSpeed(int newSpeed) = 0;

private:
    T1 speed;
};


#endif //CSC109CH10INHERIT_VEHICLE_H
