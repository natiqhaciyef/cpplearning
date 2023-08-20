#include "iostream"
#include "cmath"

using namespace std;

#ifndef CPPLEARNING_ENCAPSULATION_H
#define CPPLEARNING_ENCAPSULATION_H

class Cart {
private:
    string username;
    int verificationId = 1;

public:
    int getVerificationId() {
        return verificationId;
    }

private:
    void setVerificationId(int verificationId) {
        this->verificationId = verificationId;
    }

public:
    string getUsername() {
        return username;
    }

    void setUsername(string username) {
        this->username = username;
    }


};

#endif //CPPLEARNING_ENCAPSULATION_H
