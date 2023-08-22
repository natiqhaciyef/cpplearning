#include "iostream"
#include "Shape.h"

using namespace std;

#ifndef CPPLEARNING_RECTANGLE_H
#define CPPLEARNING_RECTANGLE_H
class Rectangle: public Shape{
public:
    double height;
    double width;

    double getShapeArea() override{
        return width * height;
    }
};

#endif //CPPLEARNING_RECTANGLE_H
