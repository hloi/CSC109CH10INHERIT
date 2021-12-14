//
// Created by hloi on 12/14/2021.
//

#ifndef CSC109CH10INHERIT_CAR_H
#define CSC109CH10INHERIT_CAR_H


#include "Vehicle.h"

template<typename T1, typename T2>
class Car : public Vehicle<T1> {
public:
    void PrintSpeed() {
        cout << "Car: ";
        Vehicle<T1>::PrintSpeed();
    }
private:
    T2 acc;
};

#endif //CSC109CH10INHERIT_CAR_H
