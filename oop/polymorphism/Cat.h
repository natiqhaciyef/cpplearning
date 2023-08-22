#include "iostream"
#include "Animal.h"

using namespace std;

#ifndef CPPLEARNING_CAT_H
#define CPPLEARNING_CAT_H
class Cat: public Animal{
public:
    void getAnimalSound(string name){
        this->name = name;
        cout << "Meow" << endl;
    }
};

#endif //CPPLEARNING_CAT_H
