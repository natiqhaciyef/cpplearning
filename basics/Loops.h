#include <iostream>
#include <cmath>
using namespace std;

#ifndef CPPLEARNING_LOOPS_H
#define CPPLEARNING_LOOPS_H

void loopsUsageFor(){
    int count;
    cout << "How much repeat to print \" Hello, World \" ?" << endl;
    cin >> count;

    for(int i = 0; i < count; i++){
        cout << "Hello, World" << endl;
    }
}

void loopsUsageWhile(){
    int sum = 0;
    int count;
    cout << "How much repeat to add 1 ?" << endl;
    cin >> count;

    int i = 0;
    while (i < count){
        sum += 1;
        i ++ ;
    }
    cout << sum << endl;
}


void loopsUsageDoWhile(){
    int sum = 0;
    int count;
    cout << "How much repeat to add 1 ?" << endl;
    cin >> count;

    int i = 8;
    do {
        sum += 1;
        i -- ;
    } while (i > count && count > 0);

    cout << sum << endl;
}

#endif //CPPLEARNING_LOOPS_H
