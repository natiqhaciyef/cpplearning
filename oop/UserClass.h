//
// Created by Natiq Haciyev on 17.08.23.
//
#include "iostream"
#include "cmath"

using namespace std;

#ifndef CPPLEARNING_USERCLASS_H
#define CPPLEARNING_USERCLASS_H


class UserClass {
public :
    string name;
    int age;
    string email;
    string phone;

    // constructor add
    UserClass() {
        cout << "Constructor running" << endl;
    }

    UserClass(string name, int age) {
        cout << "Constructor running with Name: " << name << ", Age: " << age << endl;
        this->name = name;
        this->age = age;
    }

// inside creation
    void getInfo() {
        cout << "Username: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void getDetailedInfo();

};

// outside creation
void UserClass::getDetailedInfo() {
    cout << "Username: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl;
}

#endif //CPPLEARNING_USERCLASS_H
