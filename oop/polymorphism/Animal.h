#include "iostream"

using namespace std;

#ifndef CPPLEARNING_ANIMAL_H
#define CPPLEARNING_ANIMAL_H
class Animal{
public:
    string name;

    void getAnimalSound(string name){
        this->name = name;
        cout << "Animal sound" << endl;
    }
};

#endif //CPPLEARNING_ANIMAL_H
