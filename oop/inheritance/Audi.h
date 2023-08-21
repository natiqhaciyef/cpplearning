#include "iostream"
#include "Car.h"

using namespace std;

#ifndef CPPLEARNING_AUDI_H
#define CPPLEARNING_AUDI_H

// public Car means that only public member will be inherit by Audi class

class Audi : public Car {
public:
    Audi(string brand, double price, int doors)
            : Car("Audi", brand, price, "Germany") {
        this->model = "Audi";
        this->brand = brand;
        this->price = price;
        this->doors = doors;
        this->country = "Germany";
    }

private:
    int doors;

public:
    void getInfo(){
        cout << "Model: " << model << endl;
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Doors count: " << doors << endl;
        cout << "Country: " << country << endl;
        cout << "--------------------"<< endl;
    }
};

#endif //CPPLEARNING_AUDI_H
