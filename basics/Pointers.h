#include "iostream"
#include "cmath"

using namespace std;

#ifndef CPPLEARNING_POINTERS_H
#define CPPLEARNING_POINTERS_H

void pointersUsage(){
    string brand = "Nike";
    string &info = brand;
    string copyInfo = brand;

    cout << "Original info: " << info << endl;
    cout << "Copy info: " << copyInfo << endl;

    cout << "After Change"<< endl;
    brand = "Adidas";
    cout << "Original info: " << info << endl;
    cout << "Copy info: " << copyInfo << endl;

    cout << "Memory address" << endl;
    cout << &brand;
}

#endif //CPPLEARNING_POINTERS_H
