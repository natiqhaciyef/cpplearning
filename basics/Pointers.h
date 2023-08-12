#include "iostream"
#include "cmath"

using namespace std;

#ifndef CPPLEARNING_POINTERS_H
#define CPPLEARNING_POINTERS_H

[[maybe_unused]] void referencesUsage(){
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

void pointerUsage(){
    string country = "Canada";

    // pointer
    string* countryPointer = &country;

    // it returns address
    cout << countryPointer << endl;

    // un - pointed variable
    string countryDoublePointer = *countryPointer;

    // it returns string from copy
    cout << countryDoublePointer << endl;

    country = "Italy";

    // it returns string from address
    cout << *countryPointer << endl;

}

#endif //CPPLEARNING_POINTERS_H
