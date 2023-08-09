#include <iostream>
using namespace std;

#ifndef CPPLEARNING_VARIABLES_H
#define CPPLEARNING_VARIABLES_H

void variables() {
    // primitive variables
    int i = 12;
    double d = 14.5;
    char c = 'f';
    bool b = true;
    string s = "Hello, Natiq";

    // multiple declaration
    int x = 8, t = 22, m = 41;

    // modify variable
    d = 54.1 ;

    // constant variables
    const double PI = 3.14;

    // input function
    cin >> x;

    // print function
    cout << "Hello C++";
}

#endif //CPPLEARNING_VARIABLES_H
