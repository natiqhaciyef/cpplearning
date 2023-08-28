#include "iostream"

using namespace std;

#ifndef CPPLEARNING_SINGLETON_H
#define CPPLEARNING_SINGLETON_H
class UserModel{

private:
    static UserModel* instancePointer;
    UserModel(){};


public:
    UserModel(const UserModel& obj) = delete;

    static UserModel* getInstance(){
        if (instancePointer == nullptr){
            instancePointer = new UserModel();
        }
        return instancePointer;
    }
};


#endif //CPPLEARNING_SINGLETON_H
