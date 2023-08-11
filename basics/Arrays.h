#include "iostream"
#include "cmath"

using namespace std;

#ifndef CPPLEARNING_ARRAYS_H
#define CPPLEARNING_ARRAYS_H

void arrayUsage() {
    string cars[4] = {"Audi", "BMW", "Mercedes", "Tesla"};
    cout << cars[2] << endl;

    cout << "Size of array: " << sizeof(cars) / sizeof(string) << endl;

    // array with for
    for (int i = 0; i < sizeof(cars) / sizeof(string); i++) {
        cout << cars[i] << endl;
    }

    // array with for-each
    for (string element :cars){
        cout << element << endl;
    }

    // modern way with for (increase memory performance)
    for (const auto & car : cars) {
        cout << car << endl;
    }

}

#endif //CPPLEARNING_ARRAYS_H
