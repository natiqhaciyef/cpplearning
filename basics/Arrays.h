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
    for (string element: cars) {
        cout << element << endl;
    }

    // modern way with for (increase memory performance)
    for (const auto &car: cars) {
        cout << car << endl;
    }
}

void multiDimensionalArraysUsage() {
    int numberMatrix[3][3] = {
            {1, 2, 3},
            {2, 3, 1},
            {3, 2, 1}
    };

    int columnCount = sizeof(numberMatrix) / sizeof(numberMatrix[0]);
    int rowsCount = sizeof(numberMatrix[0]) / sizeof(numberMatrix[0][0]);

    cout << numberMatrix[2][1] << endl;
    cout << "Size of multidimensional array: " << columnCount * rowsCount << endl;
}

#endif //CPPLEARNING_ARRAYS_H
