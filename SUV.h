//
// Created by hloi on 12/14/2021.
//

#ifndef CSC109CH10INHERIT_SUV_H
#define CSC109CH10INHERIT_SUV_H
#include "Vehicle.h"

template<typename T1>
class SUV : public Vehicle<T1> {
public:
    void PrintSpeed() {
        cout << "SUV: ";
        Vehicle<T1>::PrintSpeed();
    }
};

#endif //CSC109CH10INHERIT_SUV_H
