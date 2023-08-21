#include "iostream"
#include "Car.h"

using namespace std;

#ifndef CPPLEARNING_TESLA_H
#define CPPLEARNING_TESLA_H

class Tesla : public Car {
public:
    Tesla(string brand, double price, int doors) :
            Car("Tesla", brand, price, "USA") {
        this->model = "Tesla";
        this->brand = brand;
        this->price = price;
        this->doors = doors;
        this->country = "USA";
    }


private:
    int doors;

public:
    void getInfo() {
        cout << "Model: " << model << endl;
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Doors count: " << doors << endl;
        cout << "Country: " << country << endl;
        cout << "--------------------"<< endl;
    }
};

#endif //CPPLEARNING_TESLA_H
