#include <iostream>
#include <vector>

#include "Vehicle.h"
#include "Car.h"
#include "SUV.h"
#include "Sedan.h"

using namespace std;

int main() {
    vector<Vehicle<double>* > cars;

    Car<double, int>* myCar = new Car<double, int>();
    double* newSpeed = new double();
    *newSpeed = 25;
    myCar->SetSpeed(newSpeed);

    // myCar->PrintSpeed();

//    Vehicle* myCar1 = new Vehicle();
//    myCar1->SetSpeed(30);

    // myCar1->PrintSpeed();

    Sedan<double>* sed1 = new Sedan<double>();

    *newSpeed = 30;
    sed1->SetSpeed(newSpeed);

    SUV<double>*  suv1 = new SUV<double>();
    *newSpeed = 60;
    suv1->SetSpeed(newSpeed);

    cars.push_back(myCar);
    cars.push_back(sed1);
    cars.push_back(suv1);
//    cars.push_back(myCar1);

    for (size_t i=0; i<cars.size(); i++) {
        cars.at(i)->PrintSpeed();
    }


    return 0;
}