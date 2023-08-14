#include "iostream"
#include "cmath"

using namespace std;

#ifndef CPPLEARNING_POINTERS_H
#define CPPLEARNING_POINTERS_H

void referencesUsage(){
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

// &data = any ;  -> data takes any's address value (copy value with address)
// &any -> returns address of any value
// *location = &any ; -> stores any's address in location
// *location -> when print this returns data from location


#endif //CPPLEARNING_POINTERS_H
