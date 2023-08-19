#include "iostream"
#include "cmath"

using namespace std;

#ifndef CPPLEARNING_ACCESSMODIFIERS_H
#define CPPLEARNING_ACCESSMODIFIERS_H

class Mathematics{
public:
    int result;
    Mathematics(int number1, int number2){
        number[0] = number1;
        number[1] = number2;
    }

    Mathematics(int number1, int number2, int number3){
        number[0] = number1;
        number[1] = number2;
        number[2] = number3;
    }

    Mathematics(int numbers [10]){
        for (int i = 0; i < 10; ++i) {
            number[i] = numbers[i];
        }
    }

    int sum(){
        int counter = 0;
        int size = sizeof(number)/ sizeof(int);

        for (int i = 0; i < size; ++i) {
            counter += number[i];
        }

        return counter;
    }

    int subtract(){
        int counter = 0;
        int size = sizeof(number)/ sizeof(int);

        for (int i = 0; i < size; ++i) {
            counter -= number[i];
        }

        return counter;
    }

    int multiple(){
        int counter = 1;
        int size = sizeof(number)/ sizeof(int);

        for (int i = 0; i < size; ++i) {
            counter *= number[i];
        }

        return counter;
    }

    double divide(){
        int counter = 1;
        int size = sizeof(number)/ sizeof(int);

        for (int i = 0; i < size; ++i) {
            counter /= number[i];
        }

        return counter;
    }

private:
    int number [10] ;

};

#endif //CPPLEARNING_ACCESSMODIFIERS_H
