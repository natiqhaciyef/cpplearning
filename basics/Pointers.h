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

    // pointer = reference
    string* countryPointer = &country;

    string a = *countryPointer;     // variable - pointer copy element
    string* b = &country;           // pointer - reference of element
    cout << "Type 1: " << typeid(a).name() << endl;
    cout << "Type 2: " << typeid(b).name() << endl;

    // it returns address
    cout << countryPointer << endl;

    // un - pointed variable
    string countryDoublePointer = *countryPointer;

    country = "Italy";

//    // it returns string from copy
//    cout << countryDoublePointer << endl;
//
//    // it returns string from address
//    cout << *countryPointer << endl;

    cout << a << endl;
    cout << *b << endl ;
}

// Pointers are variables that store the address of another variable.
// They are declared using the * operator, followed by the variable type.

// References are aliases for existing variables.
// They are declared using the ampersand (&) operator, followed by the variable name.

// The main difference between pointers and references is that pointers can be reassigned to point to different
// variables, while references cannot. This makes references safer to use, but also less flexible.

// Feature	        Pointer	                        Reference
// Declaration	    type* pointer_name;	            type& reference_name;
// De-referencing	*pointer_name;	                reference_name;
// Reassignment	    Possible	                    Not possible
// Safety	        Less safe	                    Safer
// Flexibility	    More flexible                   Less flexible

#endif //CPPLEARNING_POINTERS_H
