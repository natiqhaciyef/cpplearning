#include "iostream"
#include "Animal.h"

using namespace std;

#ifndef CPPLEARNING_DOG_H
#define CPPLEARNING_DOG_H

class Dog : public Animal {
public:
    void getAnimalSound(string name) {
        this->name = name;
        cout << "Haw" << endl;
    }
};

#endif //CPPLEARNING_DOG_H
