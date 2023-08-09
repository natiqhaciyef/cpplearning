#include <iostream>
using namespace std;

#ifndef CPPLEARNING_OPERATORS_H
#define CPPLEARNING_OPERATORS_H

void operators() {

    // Arithmetic
    int x = 12;
    int z = 14;

    cout << "Addition: " << x + z << endl;
    cout << "Subtraction: " << x - z << endl;
    cout << "Multiplication: " << x * z << endl;
    cout << "Division: " << x / z << endl;
    cout << "Modules: " << x % z << endl;

    x++;
    cout << "Increment: " << x << endl;
    x--;
    cout << "Decrement: " << x << endl;



    // Assignment
    int a = 10;

    a += 30;
    cout << a << endl;

    a -= 30;
    cout << a << endl;

    a *= 2;
    cout << a << endl;

    a /= 2;
    cout << a << endl;

    a %= 2;
    cout << a << endl;

    int g = 20 & 2;
    cout << g << endl;

    int f = 20 | 5;
    cout << f << endl;

    int h = 20 ^ 3;
    cout << h << endl;

    int n = 20 >> 4;
    cout << n << endl;

    int m = 20 << 4;
    cout << m << endl;


    // Comparison
    cout << (x > z) << endl;
    cout << (x < z) << endl;
    cout << (m == h) << endl;
    cout << (m != z) << endl;
    cout << (h >= z) << endl;
    cout << (h <= m) << endl;



    // Logical
    cout << (m > n && x > z) << endl;
    cout << (g >= f || x == z) << endl;
    cout << (g != h) << endl;
}

#endif //CPPLEARNING_OPERATORS_H
