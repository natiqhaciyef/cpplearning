#include "iostream"
#include "Vehicle.h"

using namespace std;


#ifndef CPPLEARNING_CAR_H
#define CPPLEARNING_CAR_H
class Car: public Vehicle{
public:
    string country;
    Car(string model, string brand, double price, string country){
        this->model = model;
        this->brand = brand;
        this->price = price;
        this->country = country;
    }

private:
    string date;
};

#endif //CPPLEARNING_CAR_H
