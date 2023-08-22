#include <iostream>
#include "basics/Variables.h"
#include "basics/Operators.h"
#include "basics/StringFunctions.h"
#include "basics/Mathematics.h"
#include "basics/Conditions.h"
#include "basics/Loops.h"
#include "basics/Arrays.h"
#include "basics/Structures.h"
#include "basics/Pointers.h"
#include "basics/Functions.h"
#include "oop/UserClass.h"
#include "oop/AccessModifiers.h"
#include "oop/encapsulation/Encapsulation.h"
#include "oop/inheritance//Audi.h"
#include "oop/inheritance//Tesla.h"
#include "oop/polymorphism/Dog.h"
#include "oop/polymorphism/Cat.h"
#include "oop/polymorphism/Animal.h"
#include "oop/abstraction/Triangle.h"
#include "oop/abstraction/Rectangle.h"

using namespace std;
// tree frog

int main() {
    Triangle triangle = Triangle();
    Rectangle rectangle = Rectangle();

    triangle.side1 = 12;
    triangle.side2 = 5;
    triangle.side3 = 13;

    rectangle.height = 10;
    rectangle.width = 12;

    cout << "Rectangle area " << rectangle.getShapeArea() << endl;
    cout << "Triangle area " << triangle.getShapeArea() << endl;

    return 0;
}

