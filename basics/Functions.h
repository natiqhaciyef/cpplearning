#include "iostream"
#include "cmath"

using namespace std;

#ifndef CPPLEARNING_FUNCTIONS_H
#define CPPLEARNING_FUNCTIONS_H

// without parameter, void function
void withoutParameterVoidFunction() {
    cout << "C++ working well" << endl;
}

// with parameter, void function
void withParameterVoidFunction(string name) {
    cout << "Welcome, " << name << endl;
}


// without parameter, string function
string withoutParameterReturnableFunction() {
    return "Welcome, Admin";
}

// with parameter, string function
string withParameterReturnableFunction(string name) {
    return "Welcome, " + name;
}


// with parameter, string function, with default parameter
string withParameterReturnableFunctionWithDefaultParameter(string name = "Admin") {
    return "Welcome, " + name;
}

// return type as reference
string *referenceReturner(string info) {
    return &info;
}

// parameter as reference
string referenceGetter(string *info) {
    return *info;
}

string &referenceAddressConnectingWithParameter(string &address) {
    // reference
    string &info = address;
    info += "Hello";
    cout << &info << endl;

    // pointer
    string *any = &info;
    cout << *any << endl;
    return address;

}


// method overloading
int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c){
    return a + b + c;
}

#endif //CPPLEARNING_FUNCTIONS_H
