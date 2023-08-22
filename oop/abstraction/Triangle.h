#include "iostream"
#include "cmath"
#include "Shape.h"


using namespace std;

#ifndef CPPLEARNING_TRIANGLE_H
#define CPPLEARNING_TRIANGLE_H

class Triangle : public Shape {
public:
    double side1;
    double side2;
    double side3;

    double getShapeArea() override {
        double p = (side1 + side2 + side3) / 2;
        return sqrt(p * (p - side1) * (p - side2) * (p - side3));
    }
};

#endif //CPPLEARNING_TRIANGLE_H
