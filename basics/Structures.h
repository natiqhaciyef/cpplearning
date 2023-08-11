#include "iostream"
#include "cmath"

using namespace std;

#ifndef CPPLEARNING_STRUCTURES_H
#define CPPLEARNING_STRUCTURES_H

struct {
    string fullname;
    int age;
    string email;
    string password;
} usefulData;

void structCallAndUsage(){
    usefulData.age = 20;
    usefulData.email = "natig@gmail.com";
    usefulData.fullname = "Natiq Haciyev";
    usefulData.password = "12345";

    cout << usefulData.fullname << endl;
}

#endif //CPPLEARNING_STRUCTURES_H
